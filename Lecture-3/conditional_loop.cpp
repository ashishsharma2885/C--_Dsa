#include <iostream>
using namespace std;

int main()
{
    /*
    int a;
    cin >> a;

    // cout<<"value of n is:" << n <<endl;

    // if a is positive
    if (a > 0)
    {
        cout << "a is positive" << endl;
    } else {
        cout << "a is negative" << endl;
    }


int a,b;
// cin>> a >> b;
a = cin.get();
// cout<<" value of a and b is "<<a <<" " << b <<endl;
cout << "value is a is : "<< a << endl;
*/

    /*
    int a, b;
    cout <<"Enter the value of a"<<endl;
    cin>>a;
    cout <<"Enter the value of b"<<endl;
    cin>>b;
    if(a>b){
        cout << "A is greater" <<endl;
    }
    if(b>a){
        cout << "B is greater" <<endl;

    }
        */
    /*
 int a;
 cout << "enter the value of a" << endl;
 cin >> a;

 if (a > 0)
 {
     cout << "A is Positive";
 }

 {
     if (a < 0)
     {
         cout << "A is Negative";
     }
     else
     {
         cout << "A is 0";
     }

 }
  */

    /*
   if (a > 0)
   {
       cout << "a is positive";
   }
   else if (a < 0)
   {
       cout << "a is Negative" << endl;
   }
   else
   {
       cout << "A is 0";
   }
       */

    /* Welcome to the Home of DSA Practice – Love Babbar Sheet (Video #149)
    char ch;
    cout << "Enter a character";
    cin >> ch;
    if (ch >= 'a' && ch <= 'z')
    {
        cout << "This is the lowercase." << endl;
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        cout << "This is Uppercase." << endl;
    }
    else if (ch >= '0' && ch <= '9')
    {
        cout << "This is Numeric digit" << endl;
    }
    else
    {
        cout << "This is special charactor" << endl;
    }
    return 0;

    */

    /* Here Learn While loop
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        cout << i << " ";
        i = i+1;
    }
 */

    /*
    int n;
    cin >> n;

    int i = 1;
    int sum = 0;
    while (i<=n){
      sum = sum + i;
      i = i + 1;
    }
    cout << "value of sum is " <<sum <<endl;
    */

    /* Home work - fin sum of all even no
    int n;
   cout << "Enter the even Nuber: ";
     cin >> n;
     int i = 1;
     int sum = 0;
     while(i <= n){
       if(i % 2){
           sum += 1;
       }
       i++;
     }
     cout <<"Sum of all even number is 1 to n " <<sum <<endl;
     return 0;
     */

    /*
   int n;
   cin >> n;
   int i = 2;
   while (i <= n)
   {
       // divide hogya, not prime
       if (n % i == 0)
       {
           cout << "not prime" << endl;
       } else {
           cout <<"Not for Prime " << i <<endl;
       }
       i = i + 1;
   }
       */

    /* Pattern 1
    int n;
    cin >> n;
    int i = 1;
    while(i<=n){ // i jo hai hr row ke liye chalega
     int j = 1;
     while(j<=n){
        cout << "*";
        j = j+1;
     }
     cout <<endl;
     i = i+ 1;
    }
     */

    // Pattern 2
    int n;
    cin >> n;
    int i = 1;
    while (i<=n)
    {
        int j = 1;
        while (j<=n)
        {
            cout << i;
            j = j + 1;
        }
        cout<<endl;
        i = i + 1;
    }
}
