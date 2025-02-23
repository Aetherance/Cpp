#include<iostream>
#include<memory>
using namespace std;

struct buff {
    size_t size;
    char * data;
    int num;
    buff(int);
    buff(buff&);
    buff(buff&&);
    ~buff();
};

buff::buff(int size) {
    data = new char[size];
    this->size = size;
    cout<<"构造函数调用"<<endl;
}

buff::buff(buff&&buf) {
    data = buf.data;
    size = buf.size;
    buf.data = nullptr;
    cout<<"移动构造函数调用"<<endl;
}

buff::~buff() {
    cout<<num<<endl;
    delete[] data;
    size = 0;
}

int main() {
    buff buf1(10);
    buf1.num = 1;
    buff buf2 = move(buf1);
    buf2.num = 2;

    return 0;
}