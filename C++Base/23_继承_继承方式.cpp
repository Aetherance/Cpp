#include<iostream>
using namespace std;

class Base1
{
public:
    int a;
protected:
    int b;
private:
    int c;
};
class son1 : public Base1
{
public:
    void func()
    {
        a = 10; // 父类公共权限成员到子类中依然是公共权限
    }
    void func2()
    {
        b = 10; // 子类可以访问父类中保护权限的内容 
    }
    void func3()
    {
        // c = 0;  不可访问
    }

};
class son2 : protected Base1
{
public:
    void func()
    {
        a = 100;
    }
    void func1()
    {
        b = 100;
    }
    void func2()
    {
        //c = 1;  // 无论如何，父类中私有成员都是访问不到的
    }
};

class son3 : private Base1
{
public:
    void func()
    {
        a = 100;
    }
    void func2()
    {
        b = 100;
    }
    void func3()
    {
        // c = 100;
    }
};

class grandson : public son3
{
public:
    void fund()
    {
        
    }

};

int main()
{
    son1 s;









    return 0;
}