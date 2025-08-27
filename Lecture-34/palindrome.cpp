#include<iostream>
using namespace std;

bool checkPalindrome(string str, int i, int j) {
    // base case
    if (i >= j) {
        return true;
    }

    // character check
    if (str[i] != str[j]) {
        return false;
    }

    // recursive call
    return checkPalindrome(str, i + 1, j - 1);
}

int main() {
    string name = "madam";
    cout << endl;
    bool isPalindrome = checkPalindrome(name, 0, name.length() - 1);
    if(isPalindrome){
        cout << "Palindrome" << endl;
    } else {
        cout << "Not a Palindrome" << endl;
    }
}
