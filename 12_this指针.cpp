#include<iostream>
using namespace std;
class person
{
public:
    person(int age)
    {
        this->age = age;
        
    }
    person& returning()    //如果不返回引用，则会返回一个对象的拷贝
    {                       //相当于重新创建了一个 “值” 对象 而这个对象是不可以作左值的
        return *this;
    }
    int age;
};

int main()
{
    person p1(18);
    cout<<p1.age<<endl;
    p1.returning().age = 20;
    cout<<p1.returning().age;




    return 0;
}