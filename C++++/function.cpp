#include<iostream>
#include<functional>
using namespace std;

void A()
{
    cout<<"A"<<endl;
}

int main()
{
    function f1 = A;
    f1();



    return 0;
}