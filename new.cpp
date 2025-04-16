#include <iostream>
#include <string>
#include <cstring>
#include <queue> //堆（使用优先队列的）
#include <iomanip> //保留几位小数所需
#include <list>
#include <deque>
#include <thread> //线程
#include <vector>
#include <numeric> //与算法相关
#include <algorithm> //大部分的泛型算法所在
#include <ranges> //sort排序
#include <mutex>  //锁
#include <condition_variable> //条件变量，用于同步线程之间的
#include <functional> 
#include <future>  //期物，用于同步线程的

using namespace std;
// using std::string; 
// int main(){
//     using namespace std;
//     int age;
//     cout << "please enter youe age:";
//     cin >> age;
//     cout << "you are " << age << " old!"<<endl;
// return 0;
// }

// int main(){
//     string str1="hello";
//     string str2="world";
//     cout << str1+str2<<endl;
//     cout << str1.size();
//     std :: cout<< "head";
//     return 0;
// }

// int main(){
//     unsigned u=10;
//     int i=30,i2=20;
    
//     std :: cout << i-u << std :: endl;
//     std :: cout << u-i << std :: endl;
//     std :: cout << i-i2 << std :: endl;
//     std :: cout << i2-i << std :: endl;
//     return 0;
// }

//作用域的测试
// int i=42;
// int main(){
//     std::cout << i<<endl;
//     int i=0;
//     std :: cout << i<<endl;
//     std :: cout <<::i<<endl;
//     return 0;
// }

// int main(){
//     int a=3,b=4;
//     decltype(a) c=a;    //等价于 int c=a;
//     decltype(a=b) d=a;  //等价于 int &d=a;
//     ++c;++d;
//     cout << "a="<< a << endl;
//     cout << "b="<< b << endl;
//     cout << "c="<< c << endl;
//     cout << "d="<< d << endl;
//     return 0;
// }

// int main(){
//     vector<int >s{4,8,3,1,9,2};
//     sort(s.begin(),s.end());
//     for(auto &i:s){
//         cout<<i<<" ";
//     }
//     printf("\n");
//     cout<<s[2];
//     return 0;
// }
// 题目
//1.
// int main(){
//     int a,b;
//     cin >> a >> b;
//     cout <<"zhouzhang:" << (a+b)*2<<endl;
//     cout <<"mianji:"<<a*b<<endl;
//     return 0;
// }

//2.
// int main(){
//     const double pi=3.1415926;
//     int r;
//     cin >> r;
//     cout << fixed << setprecision(2) << "zhouc:"<< 2*r*pi<<endl;
//     cout<<"mianji"<< pi*r*r;
//     return 0;
// }

//3.
// int main(){
//     double n;
//     cin >> n;
//     double x=n*n;
//     string qw(3,'a'); //这样的初始化不能加=
//     cout << qw <<endl;
//     cout << fixed <<setprecision(1)<<((2*n-1+4)/x)*100<<"%";
//     return 0;
// }   

//字符串
// int main(){
//     string x="asADfa";
//     // cout <<x.size()<<endl;
//     // cout <<x[2]<<endl;
//     // for(auto &c:x){
//     //     c='x';
//     // }
//     string b("asADfaq");
//     if(x.find(b)!=string ::npos){
//         cout << "yes"<<endl;
//     }else{
//         cout << "no"<<endl;
//     }
//     int i=0;
//     cout << i << " another "<< ++i<<endl;
//     cout << x<<endl;
//     cout << x.substr(1,4)<< endl;
//     return 0;
// }

// void res(int *a){
//     a=0;
// }
// int main(){
//     vector<int> aln;
//     for(int i=0;i<2;i++){
//         aln.push_back(i);
//     }
//     int i=42;
//     res(&i);
//     cout<< "i="<<i<<endl;
//     auto x=aln.end();
//     cout <<"x= "<< *x <<endl;
//     for(auto i=aln.begin();i<=aln.end();i++){
//         cout <<"num="<< aln[*i]<<endl;
//     }
//     return 0;
// }

// 堆
// int main(){
//     priority_queue<int> q; 
//     q.push(10); //在使用push操作时可自动将最大的数防到堆
//     q.push(5);
//     q.push(50);
//     cout << "max num is "<< q.top()<<endl;
//     q.pop();
//     cout << "new max num is "<< q.top()<<endl;
//     return 0;
// }

//递归输出vector对象的内容
// void print(vector <int> &shuchu,size_t len=0){//该函数的第二个参数为默认值
//     if(len>=shuchu.size()){
//         return;
//     }
//     cout <<shuchu[len]<<" "<<endl;
//     print(shuchu,len+1);
// }
// int main(){
//     vector <int> num{1,2,3,4,5};
//     print(num);
//     return 0;
// }

//重载函数
// void print(int val);
// void print(double val);
// int main(){
//     print(10);
//     print(10.29);
//     return 0;
// }
// void print(int val){
//     cout << "int num is "<<val<<endl;
// }
// void print(double val){
//     cout<<"double num is "<<val<<endl;
// }

// int main(){
//     list<int> L;
//     for(size_t i=1;i<=5;i++){
//         L.push_front(i);//依次将元素插入到头部
//     }
//     auto pos=L.begin();
//     advance(pos,3);
//     L.insert(pos,42);
//     for(auto &x:L){
//         cout << x <<" ";
//     }
//     return 0;
// }

//将读取的string序列存入一个deque中，并用迭代器打印结果
// int main(){
//     vector <string> x;
//     string str;
//     while(cin >> str){
//         x.push_back(str);
//     }
//     deque<string> y;
//     for(auto mid:x){
//         y.push_front(mid);
//     }
//     y.pop_back();
//     for(auto n:y){
//         cout << n<<" ";
//     }
//     return 0;
// }

//删除元素练习

// int main(){
//     int ia[]={0,1,1,2,3,5,8,13,21,55,89};
//     vector <int >x;
//     list <int > y;
//     size_t len=sizeof(ia)/sizeof(ia[0]);
//     for(int i=0;i<len;i++){
//         x.push_back(ia[i]);
//     }
//     for(int i=0;i<len;i++){
//         y.push_back(ia[i]);
//     }
//     for(int i=0;i<len;i++){
//         cout << ia[i]<<" ";
//     }
//     printf("\n");
//     //删除偶数
//     auto ou=x.begin();
//     while(ou!=x.end()){
//         if((*ou)%2==1){
//             ou=x.erase(ou); //erase() 会 删除当前迭代器指向的元素，并返回 下一个有效迭代器，因此需要用ou保存指向下一个的指针
//         }else{
//             ou++;
//         }
//     }
//     int sum=accumulate(x.cbegin(),x.cend(),0); //求和函数
//     cout << "vector sum is "<< sum<<endl;
//     //删除奇数
//     auto ji=y.begin();
//     while(ji!=y.end()){
//         if(*ji%2==0){
//             ji=y.erase(ji);
//         }else{
//             ji++;
//         }
//     }
//     for(auto s:x){
//         cout << s<<" ";
//     }
//     printf("\n");
//     for(auto S:y){
//         cout << S<<" ";
//     }
//     return 0;
// }

//lambda

// int main(){
//     int a=5,b=10;
//     auto jia=[](int a,int b)-> int {return a+b;};
//     auto test1=[=](){
//         cout<< "a="<<a<<" b= "<<b<<endl;
//     };
//     auto test2=[&a,&b](){  //
//         a+=5;
//         b+=10;
//         cout<< "a="<<a<<" b= "<<b<<endl;
//     };
//     cout << "jia="<<jia(a,b);
//     test1();
//     test2();
//     test1();
//     return 0;
// }

// int main(){
//     int n;
//     cin >> n;
//     auto dijian=[&]()->int {
//     while(n>0)
//     n--;
//     return n;
//     };
//     while(n>0){
//         int x=0;
//         dijian();
//         cout << ++x<< endl;
//     }
//     cout << n;
//     return 0;
// }

// int main(){
//     vector <int> num{ 1, 2, 3, 4, 5, 10, 15, 20, 25, 35, 45, 50 };
//     int sum=0;
//     for_each(num.begin(),num.end(),[&sum](const int &i){sum+=i;});
//     for_each(num.begin(),num.end(),[&sum](int &j){if(j%5==0){
//         cout<<j<<" ";
//     }});
//     printf("\n");
//     for_each(num.begin(),num.end(),[&sum](int &j){if(j%10==0){
//         cout<<j<<" ";
//     }});
//     printf("\n");
//     cout<<sum<<endl;
//     return 0;
// }

//构造函数
// class line{
// public:
//     double bmi(double x,double y);
//     int kj(int l);
//     line();
//     ~line();
// private:
//     double num;
//     double len;
// };
// line::line():num(0),len(0){
//     cout<<"success"<<endl;
// };
// line::~line(){
//     cout<<"hanshujies"<<endl;
// }
// double line::bmi(double x,double y){
//     num=(x*y)/(x+y);
//     return num;
// }
// int line::kj(int l){
//     len=l;
//     return len;
// }
// int main(){
//     line p;
//     cout<<p.bmi(1.1,2.3)<<endl;
//     int q=p.kj(5);
//     cout<<"q="<<q<<endl;
//     return 0;
// }

//可变参数模板

// template <typename F,typename...Args>//typename可以是int,double，函数或者指针都行（具体看使用），
// //...Args是一个参数包，可传入多个参数
// void a(F fun,Args...args){
//     using return_type=std::invoke_result_t<F,args...>;
//     fun(args...); //展开参数包，接受其中的多个参数
// }
// void print(int x,int y){
//     cout<<"x="<<x<<" y="<<y;
// }
// int main(){
//     a(print,2,3);
//     return 0;
// }

//运用该模板求和（采用了递归来解析这个参数包）

// template <typename T>
// T print(T t){
//     return t;
// }
// template <typename T,typename...args>
// T print(T f,args...r){
//     return f+print<T>(r...);//如果不写 sum<T>(rest...)，而是 sum(rest...)
//     //编译器可能会尝试推导不同的 T，导致推导失败或引发意外的类型转换错误
// }
// int main(){
//     cout<<print(1,2,3,4);
//     return 0;
// }

// template <typename T>
// bool compare(const T &a,const T &b){
//     return a>b;
// }
// int main(){
//     double a=13.12;
//     double b=21.68;
//     using return_type=std::invoke_result_t<decltype(compare<double>),double,double>;
//     return_type x=2;
//     cout<<"x="<<x<<endl;
//     if(compare(a,b)){
//         cout<<"a is big";
//     }else{
//         cout<<"b is big";
//     }
//     return 0;
// }

//矩阵相乘

// vector<vector <int> > jzcsh(int r,int l);
// int *makehl(int temp[2]);
// vector<vector <int> > xc(const vector<vector <int> >&a,const vector<vector <int> >&b);//传入const防止修改，&只是引用效率更快
// void print(vector <vector<int>> s);
// int main(){
//     int row=0,line=0,*t;
//     t=new int[2];
//     int num=0;
//     t=makehl(t);
//     row=t[0],line=t[1];
//     vector<vector <int>> x1=jzcsh(row,line);
//     cout<<"please a new line:";
//     cin>>row;
//     vector<vector <int>> x2=jzcsh(line,row);
//     vector <vector<int>>out=xc(x1,x2);
//     cout<<"new jz is"<<endl;
//     print(out);
//     delete t;
//     return 0;   
// }
// int *makehl(int temp[2]){
//     cout<<"please enter row and line ";
//     cin>>temp[0];
//     cin>>temp[1];
//     return temp;
// }
// vector<vector <int> > jzcsh(int r,int l){
//     vector<vector<int>> s(r,vector<int>(l));
//     cout<<"please enter "<<r<<" row "<<l<<" line numbers"<<endl;
//     for(int i=0;i<r;i++){
//         for(int j=0;j<l;j++){
//             cin>>s[i][j];
//         }
//     }
//     return s;
// }

//bind(用来绑定其他函数，用来改造)
// using namespace std::placeholders;//加上这个后才能使用_4,_1这样的占位符
// int add(int a,int b){
//     return a+b;
// }
// int main(){
//     auto f=std::bind(&add,_4,_2); //指定传入的参数为第四个和第二个
//     cout<<f(1,2,3,5,5,6)<<endl;
//     return 0;
// }

// vector<vector <int> > xc(const vector<vector <int> >&a,const vector<vector <int> >&b){
//     vector<vector<int> >out(a.size(),vector<int>(b[0].size()));
//     for(int i=0;i<a.size();i++){
//         for(int j=0;j<a[i].size();j++){
//             for(int k=0;k<b[0].size();k++){
//                 out[i][k]+=a[i][j]*b[j][k];
//             }
//         }
//     }
//     return out;
// }

// void print(vector <vector<int>> s){
//     for(int i=0;i<s.size();i++){
//         for(int j=0;j<s[i].size();j++){
//             cout<<s[i][j]<<" ";
//         }
//         printf("\n");
//     }
// }

// thread

// int main(){
//     int a=5;
//     int &zuo=a;
//     int &&you=std::move(a);
//     cout<<zuo<<endl;
//     cout<<"you="<<you<<endl;
//     cout<<"location is "<<&a<<" "<<&zuo<<" "<<&you; //地址都相同
//     return 0;
// }

// void print(int a,int b){
//     cout<<a+b<<endl;
// }
// int main(){
//     thread s1(print,2,3);
//     s1.join();
//     return 0;
// }

//拷贝构造函数(通过已有对象来创建新的对象)
// class Person{
// public:
//     string name;
//     Person(const string &n):name(n){
//         cout<<"fuzhi begin"<<endl;
//     }
//     Person(const Person &otherperson){
//         name=otherperson.name;
//     }
//     void print() const{
//         cout<<"I'am "<<name;
//     }
// };
// int main(){
//     Person a("Bob");
//     Person b=a;
//     b.print();
//     return 0;
// }

//c++ list exercise

// class List{
// public:
//     int val;
//     List *next;
//     List(int data):val(data),next(nullptr){};
// };

// class Listwork{
// public:
//     Listwork():head(nullptr){};

//     void tail_in(int val){
//         List *cur=new List(val);
//         if(head==nullptr){
//             head=cur;
//         }else{
//             List *temp=head;
//             while(temp->next) temp=temp->next;
//             temp->next=cur;
//         }
//     }

//     void delete_val(int val){
//         if(!head) return;
//         if(head->val==val){
//             List *temp=head;
//             head=head->next;
//             delete temp;
//             return;
//         }
//         List *curr=head;
//         while(curr->next->val!=val&&curr->next!=nullptr){
//             curr=curr->next;
//         }
//         if(curr->next){
//             List *temp=curr->next;
//             curr->next=curr->next->next;
//             delete temp;
//         }
//     }

//     void print(){
//         List *temp=head;
//         while(temp){
//             cout<<temp->val<<" ";
//             temp=temp->next;
//         }
//     }

//     ~Listwork(){
//         while(head){
//             List *f=head;
//             head=head->next;
//             delete f;
//         }
//     }
// private:
//     List *head;
// };
// int main(){
//     Listwork l;
//     l.tail_in(10);
//     l.tail_in(20);
//     l.tail_in(30);
//     l.print();
//     printf("\n");
//     l.delete_val(20);
//     l.print();
//     return 0;
// }

// int main(){
//     vector<string> x;
//     int n=2;
//     for(int i=0;i<n;i++){
//         string temp;
//         getline(cin,temp);
//         x.push_back(temp);
//     }
//     for(auto j:x){
//         cout<<j<<endl;
//     }
//     string x1="easy",x2="qunin";
//     if(x[0].find(x1)){
//         cout<<"find it!";
//     }
//     return 0;
// }

// int main(){
//     string x="aczzx";
//     int grade=0;
//     for(int i=x.size()-1;i>=1;i--){
//         for(int j=i-1;j>=0;j--){
//             if((x[i]+x[j]+1-2*'a')/2==13){
//                 grade+=i-j;
//                 cout<<"i="<<i<<" j="<<j<<endl;
//                 break;
//             }
//         }
//     }
//     return 0;
// }

int main(){
    vector<int > nums{100,4,200,1,3,2};
    std::sort(nums.begin(),nums.end());
    for(auto &i:nums){
        cout<<i<<" ";
    }
    auto last=std::unique(nums.begin(),nums.end());
    nums.erase(last,nums.end());
    printf("\n");
    for(auto &j:nums){
        cout<<j<<" ";
    }
    return 0;
}