#include<iostream>
#include<memory>
using namespace std;

class test {
public:
    test() {
        cout<<"构造函数调用"<<endl;
    }
    ~test() {
        cout<<"析构函数调用"<<endl;
    }
private:

};

int main() {

    shared_ptr<test>ptr = make_shared<test>(test());

    shared_ptr<test>ptr1 = ptr;

    shared_ptr<test>ptr2 = ptr1;

    cout<<ptr.use_count()<<endl;

    return 0;
}