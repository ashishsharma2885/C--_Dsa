#include<iostream>
using namespace std;

char toLowercase(char ch){
    if(ch >= 'a' && ch <= 'z'){
        return ch;
    }
    else {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkPalindrome(char a[], int n){
    int start = 0;
    int end = n - 1;
    while(start < end){
        if(toLowercase(a[start] ) !=  toLowercase(a[end])) {
           return 0;
        } else {
          start++;
          end--;
        }
    }
    return 1;
}

int getLength(char name[]) {
    int count = 0;
    for(int i = 0; name[i] != '\0'; i++){
        count++;
    }
    return count;
}

void reverse(char name[], int n){
    int s = 0;
    int e = n - 1;
    while(s < e){
        swap(name[s++], name[e--]); 
    }
}

int main(){
    char name[20];

    cout << "Enter your name: ";
    cin >> name;

    cout << "Your name is: " << name << endl;

    int len = getLength(name);

    cout << "Length: " << len << endl;

    reverse(name, len);
    cout << "Reversed name: " << name << endl;

    cout << "Palindrome or Not: " << checkPalindrome(name, len) << endl;

    cout << "Charchter is: " << toLowercase('b') << endl;
    cout << "Charchter is: " << toLowercase('C') << endl;

    return 0;
}
