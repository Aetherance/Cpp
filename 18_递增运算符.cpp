#include<iostream>
using namespace std;
class my_integer
{
friend ostream& operator<<(ostream& cout,my_integer _myint);
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
    my_integer operator++(int)     //在这里加一个int占位 表示这是一个后置递增
    {                               //只能是int
        //先记录当时结果，再递增，最后返回当时结果
        my_integer temp = *this;
        num ++;
        return temp;    //这里返回的是一个值，而不是一个变量
    }

private:
    
    int num;
};
ostream& operator<<(ostream&cout,my_integer _myint)
{
    cout<<_myint;
    return cout;
}

//重载++运算符



//后置

int main()
{
    int a = 0;
    my_integer myint;
    cout<<(++++myint)<<endl;
    my_integer my = myint++;
    cout<<myint++<<endl;
    cout<<myint<<endl;



    return 0;
}