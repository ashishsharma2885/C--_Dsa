#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int main() {
    // max heap
    priority_queue<int> maxi;

    // min heap
    priority_queue<int, vector<int>, greater<int>> mini;

    // Push elements in max heap
    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);

    cout << "Max Heap size: " << maxi.size() << endl;
    int n = maxi.size();
    cout << "Max Heap elements: ";
    for (int i = 0; i < n; i++) {
        cout << maxi.top() << " ";
        maxi.pop();
    }
    cout << endl;

    // Push elements in min heap
    mini.push(5);
    mini.push(1);
    mini.push(0);
    mini.push(4);
    mini.push(3);

    int m = mini.size();
    cout << "Min Heap elements: ";
    for (int i = 0; i < m; i++) {
        cout << mini.top() << " ";
        mini.pop();
    }
    cout << endl;

    return 0;
}
