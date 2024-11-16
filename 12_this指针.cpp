#include<iostream>
using namespace std;
class person
{
public:
    person(int age)
    {
        this->age = age;
        
    }
    person returning()
    {
        return *this;
    }
    int age;
};

int main()
{
    person p1(18);
    cout<<p1.age<<endl;
    cout<<p1.returning().age;




    return 0;
}