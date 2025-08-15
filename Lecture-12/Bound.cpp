#include<iostream>
using namespace std;

int firstOcc(int arr[], int n, int key){
    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s <= e){
        if(arr[mid] == key){
            ans = mid;
            e = mid - 1; // go left to find first occurrence
        }
        else if(key > arr[mid]){ // go right
            s = mid + 1;
        }
        else { // go left
            e = mid - 1;
        }
        mid = s + (e - s) / 2; // ✅ just update, not redeclare
    }
    return ans;
}

int lastOcc(int arr[], int n, int key){
    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s <= e){
        if(arr[mid] == key){
            ans = mid;
            s = mid + 1; // go left to find first occurrence
        }
        else if(key > arr[mid]){ // go right
            s = mid + 1;
        }
        else { // go left
            e = mid - 1;
        }
        mid = s + (e - s) / 2; // ✅ just update, not redeclare
    }
    return ans;
}

int main(){
    int even[5] = {1, 2, 3, 4, 5};

    cout << "First Occurrence of 3 is at index " << firstOcc(even, 5, 3) << endl;
    cout << "Last Occurrence of 3 is at index " << lastOcc(even, 5, 4) << endl;

    return 0;
}
