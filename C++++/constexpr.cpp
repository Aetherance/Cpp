#include<iostream>
using namespace std;

constexpr int func(int a) {
    return a;
}

int main() {
    constexpr int len = 10;
    int arr[len];
    int arr2[func(10)];

    return 0;
}