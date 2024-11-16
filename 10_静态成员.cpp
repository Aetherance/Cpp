//静态成员变量
#include<iostream>
using namespace std;
class person
{
public:
    string name = "name";
    static int num;
    person()//构造
    {
        cout<<"构造函数调用"<<endl;
    }
    ~person()//析构
    {
        cout<<"析构函数调用"<<endl;
    }//如果将构造函数私有化，就无法创建对象了
};
class personp
{
public:
    string name = "name";
    static int num;
    static void func()
    {
        cout<<"STATIC func 调用";
        num = 200;
        //name = "123";
    }
};
int person::num = 100;
int main()
{
    person p;
    cout<<p.name<<endl;
    cout<<p.num<<endl;

    return 0;
}