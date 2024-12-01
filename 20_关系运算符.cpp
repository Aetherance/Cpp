#include<iostream>
using namespace std;

class person
{
public:
    person(int age)
    {
        this->age = age;
    }
    int age;
};

bool operator==(person & p1,person & p2)
{
    if(p1.age==p2.age)
        return true;
    return false;
}

bool operator!=(person & p1,person & p2)
{
    if(p1.age!=p2.age)
        return true;
    return false;
}

int main()
{
    person p1(10),p2(100);

    cout<<(p1==p2)<<endl;

    cout<<(p1!=p2)<<endl;



    return 0;
}