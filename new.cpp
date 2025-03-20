#include <iostream>
#include <string>
#include <cstring>
#include <iomanip> //保留几位小数所需
using namespace std;
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
int main(){
    double n;
    cin >> n;
    double x=n*n;
    cout << fixed <<setprecision(1)<<((2*n-1+4)/x)*100<<"%";
    return 0;
}   