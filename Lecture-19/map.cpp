#include<iostream>
#include<map>
using namespace std;

int main() {
    map<int, string> m;

    m[1] = "Ashish";
    m[12] = "kumar";
    m[3] = "Sharma";
    m.insert({5, "Abhineet"});

    cout << "Before erase:\n";
    for(auto i : m){
        cout << i.first << " " << i.second << endl;
    }

    // Check if key 12 is present
    cout << "\nFinding 12: " << m.count(12) << endl;

    // Erase key 12
    m.erase(12);

    cout << "\nAfter erasing 12:\n";
    for(auto i : m){
        cout << i.first << " " << i.second << endl;
    }

    // Using find to get an iterator to key 3
    auto it = m.find(3);

    cout << "\nIterating from key 3 to end:\n";
    for(auto i = it; i != m.end(); i++) {
        cout << i->first << " " << i->second << endl;
    }
}
