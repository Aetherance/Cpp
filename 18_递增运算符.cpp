#include<iostream>
using namespace std;
class my_integer
{
friend ostream& operator<<(ostream& cout,my_integer &myint);
public:

    my_integer()
    {
        num = 0;
    }

    //前置
    my_integer& operator++()
    {
        num++;
        return *this;   //返回引用是为了一直对一个数据进行递增
    }
    my_integer& operator++(int)     //在这里加一个int占位 表示这是一个后置递增
    {                               //只能是int

    }

private:
    
    int num;
};
ostream& operator<<(ostream&cout,my_integer &myint)
{
    cout<<myint.num;
    return cout;
}

//重载++运算符



//后置

int main()
{
    int a = 0;
    my_integer myint;
    cout<<++++myint<<endl;
    








    return 0;
}