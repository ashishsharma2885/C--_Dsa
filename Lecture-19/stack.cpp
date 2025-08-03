#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    stack<string> s;

    s.push("Ashish");
    s.push("Kumar");
    s.push("Sharma");

    cout << "Top Element: " << s.top() << endl;
    s.pop();
    cout << "Top Element:  "  << s.top() << endl;

    cout << "Size of stack: " << s.size() << endl;

    cout << "Empty or not: " << s.empty() << endl;
    
}
