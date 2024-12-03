#include<iostream>
using namespace std;

class Animal
{
public:
    virtual void speak()
    {
        cout<<"动物在说话!"<<endl;
    }


};
class Cat : public Animal
{
public:
    void speak()
    {
        cout<<"Cat speaking"<<endl;
    }



};

void doSpeak(Animal & ani)
{
    ani.speak(); // 地址早绑定 已经绑定到了animal的地址，所有不管传什么都调用animal的成员函数


}

void test02()
{
    cout<<sizeof(Animal);
}

int main()
{
    Cat cat;
    cat.speak();
    doSpeak(cat);

    test02();




    return 0;
}