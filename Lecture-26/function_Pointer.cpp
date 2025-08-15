#include <iostream>
using namespace std;

void print(int *p) {
    cout << "Address stored in pointer p: " << p << endl;   // prints the address
    cout << "Value pointed to by p: " << *p << endl;        // prints the value
}

void update(int *p) {
    *p = *p + 1; // Increment the value pointed to by p
}

int getSum(int *arr, int n) {
    cout << "Size : " << sizeof(arr) << " bytes" << endl; // will show size of pointer
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    return sum;
}

int main() {
    /*
    int value = 5;
    int *p = &value;

    cout << "Before: " << *p << endl;
    update(p);
    cout << "After: " << *p << endl; 
    */

    int arr[5] = {1, 2, 3, 4, 5};

    // Calculate number of elements before passing to function
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Sum is " << getSum(arr, n) << endl;

    return 0;
}
