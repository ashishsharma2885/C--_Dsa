#include<iostream>
using namespace std;

int main(){
    int num = 5;
    cout << num << endl;
    // address of operator - &
    cout << "address of num:" << &num << endl;

    int *ptr = &num; // pointer to num
    cout << "address of ptr: " << ptr << endl; // address stored in ptr
    cout << "value of ptr: " << *ptr << endl; // dereferencing the pointer

    double d = 4.3;
    double *p2 = &d;
    cout << "value of d: " << d << endl;
    cout << "Address of d: " << &p2 << endl;

    cout << "size of integer is " << sizeof(num) << endl;
    cout << "size of pointer is " << sizeof(ptr) << endl;
    cout << "size of double is " << sizeof(d) << endl;
    cout << "size of double pointer is " << sizeof(p2) << endl;

    return 0;
}