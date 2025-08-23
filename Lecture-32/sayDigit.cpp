#include <iostream>
using namespace std;

void sayDigit(int n, string arr[])
{
    // base case
    if (n == 0)
        return;

    // processing
    int digit = n % 10;
    n = n / 10;

    // recursive call first (to preserve order)
    sayDigit(n, arr);

    // print digit
    cout << arr[digit] << " ";
}

int main()
{
    string arr[10] = {"zero", "one", "two", "three", 
                      "four", "five", "six", "seven", "eight", "nine"};

    int n;
    cin >> n;

    if (n == 0)
        cout << arr[0]; // special case for 0
    else
        sayDigit(n, arr);

    return 0;
}
