#include<iostream>
#include<vector>
using namespace std;

/* 二维数组 */

void test01()
{
    vector<vector<int>>v;
    
    vector<int>v1;
    vector<int>v2;
    vector<int>v3;
    vector<int>v4;

    for(int i = 0;i<4;i++)
    {
        v1.push_back(i+1);
        v2.push_back(i+2);
        v3.push_back(i+3);
        v4.push_back(i+4);
    }

    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);
    v.push_back(v4);

    for(vector<vector<int>>::iterator it = v.begin();it<v.end();it++)
    {
        // *it是一个容器
        for(vector<int> :: iterator vit = it->begin();vit<it->end();vit++)
            cout<<*vit<<endl;

        cout<<endl;
    }
}

int main()
{
    test01();




    return 0;
}