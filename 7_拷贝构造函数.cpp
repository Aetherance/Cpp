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
    person p(10,"ZhangSan");
    person p2(p);   //括号法    
 


    cout<<p._age<<p._name<<endl;
    cout<<p2._age<<p2._name<<endl;




}