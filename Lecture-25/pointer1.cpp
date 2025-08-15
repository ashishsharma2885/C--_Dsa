#include<iostream>
using namespace std;

int main(){
    // // pointer to int is created, and pointing to some garbage address
    // int *p;
    // cout << "value of p: " << *p << endl; // undefined behavior, p is uninitialized

    /*
    int i = 5;
    int *q = &i;
    cout << q << endl;
    cout << *q << endl;

    int *p = 0;
    p = &i; // now p points to i

    cout << p << endl;
    cout << *p << endl;
*/

int num = 5;
int a = num;
a++;

cout << num << endl;

int *p = &num;
cout << "before" << num <<endl;
(*p)++; // incrementing the value pointed by p
cout  << "after: " << num << endl;

// copy of pointer
int *q = p;
cout << p << " - " << q << endl;
cout << *p << " - " << *q << endl;

// import concept
int i = 3;
int *t = &i;
*t = *t +1;
cout << *t << endl;
cout << "before t " << t << endl;
t = t + 1;
cout << "after t " << t << endl;

return 0;
}
