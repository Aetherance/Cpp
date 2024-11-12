#include<iostream>
using namespace std;
//使用new来开辟内存空间 delete来删除已开辟的空间
int * func()
{
    int * p = new int(10);//new返回的是该数据类型的指针
    return p;
}
void Test01()
{
    int *p = func();
    cout<<*p<<endl;
    delete p;
    cout<<*p<<endl;     //此时已经被delete不能打印出正确值(非法操作)
}
void Test02()
{
    int* arr = new int[10]{1,2,3,4,5};  //10代表数组有10个元素    //new开辟的数组可以初始化
    for(int i = 0;i<10;i++)
        printf("%d ",arr[i]);
    delete[] arr;   //释放数组的时候要加一个[]    //事实上，普通数组使用delete释放时，不加[]也可以成功释放
    for(int i = 0;i<10;i++)
        printf("%d ",arr[i]);
}
int main()
{
    Test01();
    Test02();


    return 0;
}

//堆区的数据 由程序员管理开辟 程序员管理释放 （delete）