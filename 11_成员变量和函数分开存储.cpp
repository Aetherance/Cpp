#include<iostream>
using namespace std;
class person
{
    int num;
    static int s_int;
};
int person::s_int = 10;
struct s
{

};

int main()
{
    person p;
    person p2;
    s s2;
    s s1;
    cout<<sizeof(p)<<endl<<sizeof(s1)<<endl;    //使用gcc编译时，sizeof(s1)的结果为 0
    cout<<&p<<endl<<&p2<<endl<<&s2<<endl<<&s1;

    return 0;
}