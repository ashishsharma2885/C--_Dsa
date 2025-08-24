#include <iostream>
using namespace std;

void print(int arr[], int start, int end) {
    for (int i = start; i <= end; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool binarySearch(int *arr, int start, int end, int key) {
    cout << endl;
    print(arr, start, end);

    // base case: element not found
    if (start > end)
        return false;

    int mid = start + (end - start) / 2;

    // element found
    if (arr[mid] == key)
        return true;

    if (arr[mid] < key) {
        return binarySearch(arr, mid + 1, end, key);
    } else {
        return binarySearch(arr, start, mid - 1, key);
    }
}

int main() {
    int arr[5] = {2, 4, 10, 14, 18};  // ✅ fixed size (5 elements)
    int size = 5;
    int key = 16;

    cout << "Present or not: " 
         << (binarySearch(arr, 0, size - 1, key) ? "Yes" : "No")
         << endl;

    return 0;
}
