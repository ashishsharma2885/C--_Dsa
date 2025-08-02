#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> v;
    vector<int> a(5, 1);  // Initializes a vector of size 5 with all elements set to 10
    cout << "print a" << endl;
    for(int i:a){
        cout << i << " ";
    } cout << endl;

    cout << "Capacity: " << v.capacity() << endl;

    v.push_back(1);  // Corrected here
    cout << "Capacity: " << v.capacity() << endl;

    v.push_back(2);  // Corrected here
    cout << "Capacity: " << v.capacity() << endl;

    v.push_back(3);  // Corrected here
    cout << "Capacity: " << v.capacity() << endl;

    cout << "Size: " << v.size() << endl;

    cout << "Element at 2nd Index: " << v.at(2) << endl;

    cout <<"front element: " << v.front() << endl;
    cout <<"back element: " << v.back() << endl;

    cout << "before pop" << endl;
    for(int i:v){
        cout << i << " ";
    } cout << endl;
    v.pop_back();  // Corrected here

    cout << "after pop" << endl;
    for(int i:v){
        cout << i << " ";
    } cout << endl;
}
