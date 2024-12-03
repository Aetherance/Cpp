#include<iostream>
#include<vector>
using namespace std;
class person
{
public:
    person(string name,int age)
    {
        this->age = age;
        this->name = name;
    }
    string name;
    int age;
};

void test01()
{
    vector<person>v;
    person p1("aaa",10);
    person p2("bbb",20);
    person p3("ccc",30);
    person p4("ddd",40);
    person p5("eee",50);

    // 向容器中添加数据

    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);
    v.push_back(p5);

    for(vector<person>::iterator it = v.begin();it<v.end();it++)
        cout<<"姓名:"<<it->name<<"年龄:"<<it->age<<endl;
}

int main()
{
    test01();




    return 0;
}