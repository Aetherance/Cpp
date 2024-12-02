#include<iostream>
using namespace std;
class Base1
{
    public:
    int a;
    int b;
};
class Base2
{
    public:
    int c;
    int d;
};
class son : public Base1,public Base2
{


};
int main()
{



    return 0;
}