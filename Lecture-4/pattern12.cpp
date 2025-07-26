#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    int row = 1;
    while (row <= n) {
        // 1st triangle: print spaces
        int space = n - row;
        while (space) {
            cout << " ";
            space = space - 1;
        }

        // 2nd triangle: print increasing numbers
        int j = 1;
        while (j <= row) {
            cout << j;
            j = j + 1;
        }

        // 3rd triangle: print decreasing numbers
        int start = row - 1;
        while (start) {
            cout << start;
            start = start - 1;
        }

        // Move to next line
        cout << endl;
        row = row + 1;
    }

    return 0;
}
