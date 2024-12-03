#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void MyPrint(int val)
{
    cout<<val<<endl;

}

void test01()
{
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    
    // 通过迭代器来访问容器中的数据

    vector<int>::iterator itB = v.begin(); // 起始迭代器 指向容器中第一个位置
    vector<int>::iterator itE = v.end(); // 结束迭代器 指向容器中最后一个元素的下一位置

    while(itB!=itE)
        cout<<*itB++<<endl;

    cout<<endl;

    for(vector<int>::iterator it = v.begin();it!=v.end();it++)
        cout<<*it<<endl;

    cout<<endl;

    // STL提供的遍历算法
    for_each(v.begin(),v.end(),MyPrint);
}


int main()
{
    test01();

    return 0;
}