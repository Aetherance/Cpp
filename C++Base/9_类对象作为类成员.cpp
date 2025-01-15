#include<iostream>
#include<string>
using namespace std;
string name = "hello world";
class Phone
{
public:
    string name;
    string name2;
    int num;
    Phone(string name_,string name2_):name(name_)     //手机品牌名
    {
        name2 = name2_;
    }
};
class Person
{
public:
    Person(string name,string p_name):p1(p_name,p_name)    //这里只能使用行参列表来调用person的构造函数进行初始化
    {
        m_name = name;
        //p1 = p_name;
    }
    string m_name;
    Phone p1;
};
int main()
{
    Person p(name,name);

    return 0;
}

//一个类中的哪条语句最先被执行?