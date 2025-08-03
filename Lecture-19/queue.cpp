#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<string> q;

    q.push("Ashish");
    q.push("kumar");
    q.push("Sharma");

    cout << "Size before pop " << q.size() << endl;

    cout << "First Element: " << q.front() << endl;
    q.pop();
    cout << "first Element " << q.front() << endl;

    cout << "Size of queue: " << q.size() << endl;
}