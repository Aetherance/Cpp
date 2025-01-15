#include<iostream>
using namespace std;
class person
{
    friend ostream &operator<<(ostream &cout,person &p);

    int age = 10;
};

ostream &operator<<(ostream &cout,person &p)
{
    cout<<p.age;
    return cout;
};

int main()
{
    person p;

    cout<<p<<p<<p<<endl<<endl;






    return 0;
}
