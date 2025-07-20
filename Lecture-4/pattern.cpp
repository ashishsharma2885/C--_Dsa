#include <iostream>
using namespace std;

int main()
{
    
    int n;
    cin >> n;
    int i = 1; // I was start 1
    while (i <= n)
    {
        int j = 1; // column ke liye 1 variable le leta hu j
        while (j <= n)
        {
            cout << n - j + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;

    }
        
}