#include<iostream>
using namespace std;
void func(int & a)
{
    cout<<"func调用"<<endl;
}
void func(const int & a)
{
    cout<<"func(const)调用"<<endl;
}
void func2(int a,int b = 10)
{
    cout<<"func2()的调用"<<endl;
}
void func2(int a)
{
    cout<<"func2()的调用"<<endl;
}
int main()
{
    int a = 10, c = 10;
    func(10);
    func(a);

    //func2(10);    出现二义性

}
// 函数重载条件
//1.函数名称相同
//2.函数参数类型不同 或者 个数不同 或者 顺序不同    返回值不可以作为函数重载的条件k