#include<iostream>
#include<vector>
using namespace std;
vector<int>v = {1,2,3,4,5};

int typicalArr[] = {6,6,6,6,6};

int main()
{
    for(int num : v)
    {
        cout<<num<<endl;
    }

    for(auto element : v)
        cout<<element<<endl;

    for(auto num : typicalArr)
        cout<<num<<endl;    // C类型数组也适用
    
    return 0;
}