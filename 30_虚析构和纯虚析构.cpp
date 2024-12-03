#include<iostream>
#include<string> 
using namespace std;
class Anilmal
{
public:
    Anilmal()
    {
        cout<<"Animal的构造函数调用"<<endl<<endl;
    }
    virtual void speak() = 0;

    virtual ~Anilmal()
    {
        cout<<"Anilmal 析构函数调用"<<endl<<endl;
    }


};

class Cat : public Anilmal
{
public:
    Cat(string name)
    {
        cout<<"Cat的构造函数调用"<<endl<<endl;
        this->name = new string(name);
    }
    void speak()
    {
        cout<<"小猫"<<*name<<"在说话"<<endl<<endl;
    }
    string * name;
    ~Cat()
    {
        cout<<"Cat的析构函数调用"<<endl<<endl;
        if(this->name!=NULL)
            delete this->name,this->name = NULL;       
    }

}; 

void test01()
{
    // Cat c("t");
    Anilmal * ani = new Cat("Tom");
    // Anilmal & a = c;
    ani->speak();
    // a.speak();


    delete ani; // delete父类指针的时候并不会执行子类的析构代码，
                // 从而引发内存泄漏
    
}

int main()
{
    test01();





    return 0;
}