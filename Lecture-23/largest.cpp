#include<iostream>
#include<climits>
using namespace std;

// Function to check if an element is present
bool isPresent(int arr[][4], int target, int row, int col) {
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(arr[i][j] == target){
                return true;
            }
        }
    }
    return false;
}

// Function to find the row with the maximum sum
int largest(int arr[][4], int row, int col){
    int maxi = INT_MIN;
    int rowIndex = -1;
    for(int i = 0; i < row; i++){
        int sum = 0;
        for(int j = 0; j < col; j++){
            sum += arr[i][j];
        }
        if(sum > maxi){
            maxi = sum;
            rowIndex = i;
        }
    }
    cout << "The maximum sum is " << maxi << endl;
    return rowIndex;
}

int main(){
    int arr[3][4];

    // Input
    cout << "Enter the elements:" << endl;
    for(int row = 0; row < 3; row++){
        for(int col = 0; col < 4; col++){
            cin >> arr[row][col];
        }
    }

    // Output array
    cout << "Printing the array:" << endl;
    for(int row = 0; row < 3; row++){
        for(int col = 0; col < 4; col++){
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

    // Search
    cout << "Enter the element to search: ";
    int target;
    cin >> target;

    if(isPresent(arr, target, 3, 4)){
        cout << "Element found" << endl;
    } else {
        cout << "Element not found" << endl;
    }

    // Max row sum
    int ansIndex = largest(arr, 3, 4);
    cout << "Row with maximum sum is at index: " << ansIndex << endl;

    return 0;
}
