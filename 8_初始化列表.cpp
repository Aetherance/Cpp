//初始化列表
#include<iostream>
using namespace std;
class Person
{
public:
    // Person(int a_,int b_,int c_)
    // {
    //     a = a_;
    //     b = b_;
    //     c = c_;
    // }    //传统操作
    
    Person(int a_,int b_,int c_):a(a_),b(b_),c(c_)  //型参列表
    {

    }
    int a;
    int b;
    int c;
};
int main()
{
    Person p(10,100,1000);
    cout<<p.a<<endl<<p.b<<endl<<p.c<<endl;


    return 0;
}