#include<iostream>
using namespace std;

template<class NameType,class AgeType>
class Person
{
public:
    Person(NameType name,AgeType age)
    {
        this->age = age;
        this->name = name;
    }
    void showPerson()
    {
        cout<<name<<" "<<age;
    }
    NameType name;
    AgeType age;
};

int main()
{
    Person<string,int>p1("John",18);
    p1.showPerson();

    return 0;
}