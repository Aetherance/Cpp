#include<iostream>
#include<memory>
#include<unistd.h>
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

    {
        unique_ptr<test>ptr(new test());
        unique_ptr<test>ptr2(new test());
        ptr = move(ptr2);

        sleep(1);
    }

    sleep(1);
    
    return 0;
}