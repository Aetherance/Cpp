#include<iostream>
using namespace std;
class person
{
public:
    person personAddPerson(person&p)
    {
        person temp;
        temp.age = p.age + this->age;
        return temp;
    }
    person operator+(person &p)
    {
        person temp;
        temp.age = p.age + this->age;
        return temp;
    }
    int age;
};//成员函数实现
// person operator+(person &p1,person & p2)
// {
//     person temp;
//     temp.age = p1.age + p2.age;
//     return temp;
// }


int main()
{
    person p1,p2;
    p1.age = 10;
    p2.age = 20;
    cout<<(p1+p2).age;






    return 0;
}