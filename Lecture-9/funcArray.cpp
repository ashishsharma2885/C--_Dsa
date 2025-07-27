#include<iostream>
using namespace std;

// Function to print the array
void printArray(int arr[], int size){
  cout << endl << "Printing the array:" << endl;
  for(int i = 0; i < size; i++){
    cout << arr[i] << " ";
  }
  cout << "\nPrinting Done" << endl;
}

int main(){
    // declare
    int number[15];
    // accessing in array
    cout << "Value at 15 index " << number[15] << endl; // undefined behavior

    // initializing an array
    int second[3] = {5, 7, 11};
    cout << "Value at 2 index " << second[2] << endl;
    // printArray(second, 3); // Call function

    int third[15] = {2, 7};
    // printArray(third, 15); // Call function

    int fourth[10] = {0}; // All others auto-filled as 0
    // printArray(fourth, 10); // Call function


    int fifth[10] = {1}; // Only first is 1, rest are 0
    // printArray(fifth, 10); // Call function
    int fifthSize = sizeof(fifth)/sizeof(int);
    cout << "Size of fifth array: " << fifthSize << endl;

  char ch[15] = {'a', 'b', 'c', 'd'};
  cout << ch[3] << endl;

    cout << endl << "Everything is fine" << endl;
}
