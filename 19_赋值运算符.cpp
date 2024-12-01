#include<iostream>
#include<algorithm>
using namespace std;
class person
{
public:
    person(int age)
    {
        this->age = new int(age);
    }

    ~person()
    {
        delete this->age;

    }

    person & operator=(person &p)
    {
        if(p.age!=NULL)
        {
            delete age;
            age = NULL;
        }

        age = new int(*p.age);
        return *this;
    }

    int * age;
};

int main()
{
    person p1(18);
    person p2(20);
    person p3(30);
    cout<<*(p1.age)<<endl;
    cout<<*(p2.age)<<endl;
    
    p3 = p2 = p1;

    cout<<*(p1.age)<<endl;
    cout<<*(p2.age)<<endl;

    return 0;
}