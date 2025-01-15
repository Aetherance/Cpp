#include<iostream>
using namespace std;
//常函数和常对象
class person
{
public:
//this指针的本质是指针常量 他的指向不可修改
    void showPerson() const     //加上这个const后，会使this指向的值也不可修改
    {
        b = 100;

        //this = NULL;  this 的指向是不可修改的
    }

mutable int b;//特殊变量，即使在常函数中也可修改
int a;
};
int main()
{
    const person p = person();









    return 0;
 }