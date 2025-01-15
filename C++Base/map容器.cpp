#include<iostream>
#include<map>

using namespace std;
int main()
{
    map<int,int> m;
    m.insert(pair(10,20));
    m.insert(pair(10,20));
    m.insert(pair(11,20));
    m.insert(pair(15,20));

    for(map<int,int>::iterator it = m.begin();it!=m.end();it++)
        cout<<(*it).first<<" "<<it->second <<endl;



    return 0;
}