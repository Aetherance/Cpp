#include<iostream>
#include<memory>
using namespace std;

void test2(string & str) {
    cout<<"左值引用"<<endl;
}

void test2(string && str) {
    cout<<"右值引用"<<endl;
}

template<class T>
void test3(T && v) {
    test2(forward<T>(v));
}


void test(string && str) {
    test2(forward<string&&>(str));
}

void test(string & str) {
    test2(forward<string&>(str));
}

int main() {
    test("右值");
    string lval = "左值";
    test(lval);

    test3("右值");
    test3(lval); 

    return 0;
}