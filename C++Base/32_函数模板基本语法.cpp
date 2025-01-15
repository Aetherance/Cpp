#include<iostream>
using namespace std;

template<typename T>
void mySwap(T & a, T & b)
{
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}

int main()
{
    int a = 10,b = 20;
    mySwap<int>(a,b);
    cout<<a<<" "<<b<<endl;

    return 0;
}