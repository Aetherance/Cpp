#include<iostream>
using namespace std;
class Base  // 抽象类
{
public:
    virtual void func() = 0;    // 纯虚函数

};
class Son : public Base
{
public:

};
int main()
{
    /*
    Base b1;    // 抽象类是无法实例化对象的
    */

   //Son s;
    // 子类不重写纯虚函数，子类也是抽象类


    return 0;
}