#include<iostream>
#include<memory>
using namespace std;
int main() {

    shared_ptr<int>ptr = make_shared<int>(10);
    shared_ptr<int>ptr2 = ptr;
    ptr = ptr2;
    cout<<ptr.use_count();


    return 0;
}