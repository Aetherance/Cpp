#include<iostream>
#include<string>    
using namespace std;
class Building;
class Good
{
public:
    void visit();
    Building * building;


};
class Building
{

public:
    string sitting_room = "sitting";
private:
    string bed_room =  "bed_room";
public:
    Building()
    {



    }
friend Good;
friend void good(Building * B);
};

void Good::visit()
{
    cout<< "正在访问 ："<<building->sitting_room;
}

void good(Building * B)
{
    cout<<"正在访问:"<<B->sitting_room<<endl;
    cout<<"正在访问:"<<B->bed_room;

}
int main()
{
    Building B;
    good(&B);



    return 0;
}