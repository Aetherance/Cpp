// 仿函数 
#include<iostream>
#include<string>
using namespace std;
class MyPrint
{
public:

    void operator()(string test)
    {
        cout<<test<<endl;
    }
};

int main()
{
    MyPrint print;
    print("hello world");


 
    return 0;
}

//由于 () 重载在使用时非常像一个函数 将其称为仿函数