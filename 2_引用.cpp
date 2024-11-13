#include<iostream>
using namespace std;
//引用的作用: 给变量起别名
void mySwap(int& a,int &b)
{
    a = a^b;
    b = a^b;
    a = a^b;
}
int& test01()
{
    static int b = 20;
    int&a = b;
    return a;
}
int main()
{
    int a = 10,b = 3;
    swap(a,b);
    cout<<a<<endl<<b<<endl;

    //test01() = 1000;
    printf("%d",b);

    int n = 10;
    const int & ref = 10;   //编译器修改优化 
    return 0;
}

//引用必须要初始化
//初始化后引用就不能改了
//不要返回局部变量的引用
//返回值是引用的函数可以作左值
//引用的本质在C++内部的实现就是一个指针常量
//可以用const修饰防止形参修改实参