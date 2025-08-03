#include<iostream>
#include<set>
using namespace std;

int main() {
    set<int> s;

    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(0);
    s.insert(4);

    cout << "Initial set elements: ";
    for (int i : s) {
        cout << i << " ";
    }
    cout << endl;

    // Erase first element
    s.erase(s.begin());

    cout << "After erasing first element: ";
    for (int i : s) {
        cout << i << " ";
    }
    cout << endl;

    // Count if 5 is present
    cout << "Is 5 present? -> " << s.count(5) << endl;  // 1 = present, 0 = not present

    // Count if 2 is present
    cout << "Is 2 present? -> " << s.count(2) << endl;

    // Find 6
    auto it = s.find(6);
    if (it != s.end()) {
        cout << "Element 6 found at: " << *it << endl;
    } else {
        cout << "Element 6 not found" << endl;
    }

    // Find 10
    it = s.find(10);
    if (it != s.end()) {
        cout << "Element 10 found at: " << *it << endl;
    } else {
        cout << "Element 10 not found" << endl;
    }

    return 0;
}
