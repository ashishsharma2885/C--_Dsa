#include<iostream>
using namespace std;
#include<array>
int main(){
  array<int, 4> arr = {1, 2, 3, 4};
  cout << "Size of array: " << arr.size() << endl;
  for(int i=0; i<arr.size(); i++){
    cout << arr[i] << " " << endl;
  }
   cout << "Element at a 2 index " << arr.at(2) << endl;
   cout << "Empty or not: " << arr.empty() << endl;

    cout << "Element at a 2 index " << arr.front() << endl;
    cout << "Element at a 2 index " << arr.back() << endl;
}