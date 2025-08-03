#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    // Make sure the vector is sorted before using binary_search
    sort(v.begin(), v.end());

    // binary_search returns true/false
    cout << "Finding 5 > " << binary_search(v.begin(), v.end(), 5) << endl;

    // lower_bound and upper_bound return iterators
    auto lower = lower_bound(v.begin(), v.end(), 2);
    auto upper = upper_bound(v.begin(), v.end(), 2);

    // Display values at those positions
    cout << "Lower bound of 2 > " << (lower != v.end() ? *lower : -1) << endl;
    cout << "Upper bound of 2 > " << (upper != v.end() ? *upper : -1) << endl;

    int a = 3;
    int b = 5;

    cout << "Max > " << max(a, b) << endl;
    cout << "Min > " << min(a, b) << endl;

    swap(a, b);
    cout<<"a > " << a << endl;

    string abcd = "abcd";
    reverse(abcd.begin(), abcd.end());
    cout << "Reversed string > " << abcd << endl;

    rotate(v.begin(), v.begin() + 1, v.end());
    cout << " after rotate > ";
    for(int i:v) {
       cout << i << " ";

    }
     cout << endl;

    // Sort the vector again
    sort(v.begin(), v.end());
    cout << "After sort > ";
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;
}
