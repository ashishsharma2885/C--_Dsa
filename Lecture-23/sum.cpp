#include<iostream>
using namespace std;

// to print row wise sum
void printSum(int arr[][4], int row, int col){
    cout << "Printing the row-wise sum:" << endl;
    for(int i = 0; i < row; i++){
        int sum = 0;
        for(int j = 0; j < col; j++){
            sum += arr[i][j];
        }
        cout << "Sum of row " << i << " = " << sum << endl;
    }
    cout << endl;
}

int main(){
    int arr[3][4];

    cout << "Enter the elements:" << endl;
    for(int row = 0; row < 3; row++){
        for(int col = 0; col < 4; col++){
            cin >> arr[row][col];
        }
    }

    // Printing the array
    cout << "Printing the array:" << endl;
    for(int row = 0; row < 3; row++){
        for(int col = 0; col < 4; col++){
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

    printSum(arr, 3, 4);

    return 0;
}
