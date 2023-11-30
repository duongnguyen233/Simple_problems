#include<iostream>
#include <string>
using namespace std;

template<typename T>
class doubledClass
{
public:
    T data;
    doubledClass(T val);
    void doubled();
};

template<typename T>
doubledClass<T>::doubledClass(T val) {
    this->data = val;
}

template<typename T>
void doubledClass<T>::doubled() {
    this->data += this->data;
}

int main()
{
    doubledClass<int> test1(4);
    test1.doubled();
    cout << test1.data << endl;

    doubledClass<float> test2(1.25);
    test2.doubled();
    cout << test2.data << endl;

    doubledClass<string> test3("abc");
    test3.doubled();
    cout << test3.data << endl;

    doubledClass<char> test4('a');
    test4.doubled();
    cout << test4.data << endl;
}
