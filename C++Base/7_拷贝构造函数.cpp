#include<iostream>
using namespace std;
class person
{
public:

    int _age;
    string _name;

    person()
    {
        cout<<"person的拷贝构造函数调用";
    }

    person(int age,string name)
    {
        _age = age;
        _name = name;
    }

    //传引用的意义在于，
    // 如果不引用，相当于创建一个新对象，
    //也会调用拷贝构造函数，会一直重复下去
    person(const person &p)//只有这种形式是拷贝构造函数。
    {
        _age = p._age;
        _name = p._name;
    }
};
int main()
{
    person p0();    //只写空括号 不会成功创建对象，编译器会认为这是函数的声明 
    person p(10,"ZhangSan");
    person p2(p);   //括号法    
 
    p2 = person(20,"LiSi"); //显示法

    person(10,"no_name");   //匿名对象 可以用‘=’给他一个名 (显示法)
    cout<<p._age<<p._name<<endl;
    cout<<p2._age<<p2._name<<endl;
    //person(p2);//编译器会认为 person(p3) === person p3 编译器会认为这是一个对象的声明。
    person p4 = {10,"name"};

}