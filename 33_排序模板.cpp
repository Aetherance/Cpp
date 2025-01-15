#include<iostream>
#include<algorithm>
using namespace std;

template<class T>
void Sort(T arr[],int len)
{
    sort(arr,arr+len);
}

template<class T>
void Print(T arr[],int len)
{
    for(int i = 0;i<len;i++)
        cout<<arr[i]<<endl;
}

int main()
{
    int arr[] = {1,1,4,5,1,4};
    char str[] = {'d','g','t','y'};
    Sort<int>(arr,6);
    Sort<char>(str,4);

    Print(arr,6);
    Print(str,4);

    return 0;
}