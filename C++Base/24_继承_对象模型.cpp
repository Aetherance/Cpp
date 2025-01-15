#include<iostream>
using namespace std;

class Base
{
public:
    int a;
protected:
    int b;
private:
    int c;

};

class son : public Base
{
public:
    int d;

};
void test01()
{
    cout<<sizeof(son)<<endl;
}

int main()
{
    test01();








    return 0;
}