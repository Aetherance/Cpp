#include<iostream>
using namespace std;
class person
{
public:
    void showClassName()
    {
        if(this == NULL)return;//提高代码的健壮性
        cout<<"age = "<<age;    //其实这种成员变量在类内的使用都会默认加上this指针
    }                           //如果用空指针访问，this指针也会是空指针
                                //再对它进行解引用，就会引发段错误
    void showClassAge()
    {
        cout<<"age!";
    }

    int age;
};
int main()
{
    person * p = NULL;
    p->showClassAge();
    p->showClassName(); //段错误





    return 0;
}