#include <iostream>
#include <vector>
#include <thread>
#include <future>
#include <functional>
#include <condition_variable>
#include <mutex>
#include <memory>
#include <queue>

using return_type=std::vector<std::vector<double>>;

class threadpool{
public:
    explicit threadpool(size_t threadnum=std::thread::hardware_concurrency()):stop(false){
    //std::thread::hardware_concurrency()可返回系统上可以执行的最大线程数，通常是CPU核心数
        for(int i=0;i<threadnum;i++){
            s.emplace_back([this](){ //lambda的构建捕获this后就可调用这个类中的各个成员
                while(true){ //除非输入相应的信号否则一直处理任务队列
                    std::function<void()> task;
                    {
                        std::unique_lock<std::mutex> lock(this->qmutex);
                        this->qc.wait(lock,[this](){
                            return this->stop==true||!this->tasks.empty();
                        });
                        if(this->stop&&this->tasks.empty()){
                            return;
                        }
                        task=std::move(this->tasks.front()); //加上move后效率更高，移动赋值，避免不必要的拷贝
                        this->tasks.pop();
                    }
                    //将锁规定在一个作用域内，离开后会自动解锁，这样可以防止锁住执行时间长的任务
                    task(); //开始执行
                }
            });
        }
    }

    template<typename F,typename hd=std::function<void(return_type)>>
    auto queuetasks(F&&f,std::vector<return_type> q,hd data=nullptr){ //定义了一个参数获取回调的东西
        auto task=std::make_shared<std::packaged_task<return_type()>>([=](){  //对任务进行封装
            return f(q);
        }); 
        std::future<return_type> r=task->get_future();
        {
            std::unique_lock<std::mutex> lock(qmutex);
            tasks.emplace([task,data](){
            std::thread::id threadid=std::this_thread::get_id();
            std::cout<<"thread "<<threadid<<" start working"<<std::endl;
            (*task)();
            if(data){
            data(task->get_future().get());
            }
            std::cout<<"thread "<<threadid<<" finsh tasks"<<std::endl;
            });
        }
        qc.notify_one();
        return r;
    }
    ~threadpool(){
        {
            std::unique_lock<std::mutex> lock(qmutex);
            stop=true;  
        }
        qc.notify_all(); //唤醒所有线程，准备清理掉
        for(std::thread &deal:s){
            deal.join();
        }
    }

private:
    bool stop;//用来控制线程池是否停止运行的标志。初始化为 false 表示线程池默认情况下是启动的。
    std::vector<std::thread> s;
    std::mutex qmutex;
    std::condition_variable qc;
    std::queue<std::function<void()> > tasks;
};

return_type work(const return_type&A,const return_type&B);
return_type break_jz(std::vector<return_type> m);

int main(){
    threadpool jzxc;
    return_type x1={{1,2},{3,4}};  
    return_type x2={{5,6},{7,8}};
    return_type x3={{2,2},{2,2}};
    std::vector<return_type> jzs={x1,x2,x3};
    auto ans=jzxc.queuetasks(break_jz,jzs);
    return_type o=ans.get();
    for(auto &x:o){
        for(auto y:x){
            std::cout<<y<<" ";
        }
        printf("\n");
    }
    std::cout<<"all tasks finsh"<<std::endl;
    return 0;
}

return_type break_jz(std::vector<return_type> m){
    int n=m.size();
    return_type out=m[0];
    for(int i=1;i<n;i++){
        out=work(out,m[i]);
    }
    return out;
}

return_type work(const return_type&A,const return_type&B){
    return_type out(A.size(),std::vector<double>(B[0].size()));
    for(int i=0;i<A.size();i++){
        for(int j=0;j<A[i].size();j++){
            for(int k=0;k<B[0].size();k++){
                out[i][k]+=A[i][j]*B[j][k];
            }
        }
    }
    return out;
}