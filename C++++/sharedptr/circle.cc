#include<iostream>
#include<memory>
using namespace std;

class B;

class A
{
public:
    shared_ptr<B>ptr;

};

class B
{
public:
    shared_ptr<A>ptr;
};


int main() {
    shared_ptr<A>ptr2 = make_shared<A>();
    shared_ptr<B>ptr1 = make_shared<B>();

    cout<<ptr1.use_count()<<endl<<ptr2.use_count()<<endl;
    
    ptr2->ptr = ptr1;
    ptr1->ptr = ptr2;

    cout<<ptr1.use_count()<<endl<<ptr2.use_count()<<endl;
    
    return 0;
}

// 本程序会内存泄露