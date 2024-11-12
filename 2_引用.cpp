#include<iostream>
using namespace std;
//引用的作用: 给变量起别名
int main()
{
    int a = 10;
    int&b = a,&c = a;
    

    return 0;
}

//引用必须要初始化
//初始化后引用就不能改了