#include <iostream>
#include <string>
#include <cstring>
#include <queue> //堆（使用优先队列的）
#include <iomanip> //保留几位小数所需
#include <list>
#include <deque>
#include <vector>
#include <numeric> //与算法相关
#include <algorithm> //大部分的泛型算法所在
#include <ranges> //sort排序
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

//矩阵相乘

vector<vector <int> > jzcsh(int r,int l);
int *makehl(int temp[2]);
vector<vector <int> > xc(const vector<vector <int> >&a,const vector<vector <int> >&b);//传入const防止修改，&只是引用效率更快
void print(vector <vector<int>> s);
int main(){
    int row=0,line=0,*t;
    t=new int[2];
    int num=0;
    t=makehl(t);
    row=t[0],line=t[1];
    vector<vector <int>> x1=jzcsh(row,line);
    cout<<"please a new line:";
    cin>>row;
    vector<vector <int>> x2=jzcsh(line,row);
    vector <vector<int>>out=xc(x1,x2);
    cout<<"new jz is"<<endl;
    print(out);
    delete t;
    return 0;   
}
int *makehl(int temp[2]){
    cout<<"please enter row and line ";
    cin>>temp[0];
    cin>>temp[1];
    return temp;
}
vector<vector <int> > jzcsh(int r,int l){
    vector<vector<int>> s(r,vector<int>(l));
    cout<<"please enter "<<r<<" row "<<l<<" line numbers"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<l;j++){
            cin>>s[i][j];
        }
    }
    return s;
}

vector<vector <int> > xc(const vector<vector <int> >&a,const vector<vector <int> >&b){
    vector<vector<int> >out(a.size(),vector<int>(b[0].size()));
    for(int i=0;i<a.size();i++){
        for(int j=0;j<a[i].size();j++){
            for(int k=0;k<b[0].size();k++){
                out[i][k]+=a[i][j]*b[j][k];
            }
        }
    }
    return out;
}

void print(vector <vector<int>> s){
    for(int i=0;i<s.size();i++){
        for(int j=0;j<s[i].size();j++){
            cout<<s[i][j]<<" ";
        }
        printf("\n");
    }
}