#include<iostream>
using namespace std;

// Hold
void printArray(){
}
int main(){
    // declare
    int number[15];
    // accessing in aaray
    cout << "Value at 15 index " << number[15] << endl;
   // cout << "Value at 20 index " << number[20] << endl;
   // initializing an array
   int second[3] = {5, 7, 11};
   // accessing an element
   cout << "Value at 2 index " << second[2] << endl;
   int third[15] = {2, 7};
   int n = 15;
   cout << "printing the array" <<endl;
   // print the array
   for(int i=0; i<n; i++){
   cout << third[i] << " ";
   }
   // initializing an array with all elements as 0
   int fourth[10] = {0};
   n = 10;
   cout << endl << "printing the array" <<endl;
   for(int i=0; i<n; i++){
   cout << fourth[i] << " ";
   }
   // initializing all location with 1 (not possible in 1 below line)
   int fifth[10] = {1};
   n = 10;
   cout << endl << "printing the array" <<endl;
   for(int i=0; i<n; i++){
   cout << fifth[i] << " ";
   }
    cout << endl << "Every thing is fine" << endl;

}