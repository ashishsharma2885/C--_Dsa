#include<iostream>
using namespace std;
int main(){
    int num = 12;
    cout <<endl;
    switch(num){
        case 1: cout << "First" <<endl;
        break;
        case 2: cout << "Second" <<endl;
        break;
        case 3:  cout << "Third" <<endl;
        default: cout << "It is the default case" <<endl;
    }
}