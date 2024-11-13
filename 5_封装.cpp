#include<iostream>
using namespace std;
class Student
{
public:
    string m_name;
    void change_car(string car)
    {
        m_car = car;
    }
    string get_car()
    {
        return m_car;
    }
    string get_name()
    {
        return m_name;
    }
protected:
    string m_car;
    
private:
    int password;
};
struct s
{
private:


}
int main()
{
    Student s1;
    s1.m_name = "ZhangSan";
    cout<<s1.get_name()<<endl;
    s1.change_car("Lanber");
    cout<<s1.get_car()<<endl;




    return 0;
}