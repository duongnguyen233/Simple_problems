// finMax.cpp
#include<iostream>
using namespace std;

template<typename T>
T findMax(T &a, T &b) {
    return (a > b) ? a : b;
}

int main() {
    int num1 = 20, num2 = 50;
    cout << findMax<int>(num1, num2) << endl;

    char c1 = 'a', c2 = 'b';
    cout << findMax<char>(c1, c2) << endl;

    float f1 = 3.12f, f2 = 3.13f;
    cout << findMax<float>(f1, f2) << endl;

    f1 = 1.11, f2 = 2.22;
    cout << findMax(f1, f2) << endl;
    return 0;
}