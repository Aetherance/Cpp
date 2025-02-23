#include<iostream>
using namespace std;

template<class T>
T func(T temp) {
    decltype(temp) temp2(temp);
    return temp2;
}

int main() {
    int num = 10;
    int o(num);
    auto num_b = func<int>(num);

    cout<<num_b<<endl;

    cout<<o<<endl;

    return 0;
}