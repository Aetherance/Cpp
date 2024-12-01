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