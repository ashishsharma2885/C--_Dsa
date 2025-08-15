#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<" enter the value of n"<<endl;
    cin>>n;
    cout<< "printing count from 1 to n" <<endl;
    /*
    for(int i = 0; i <= n; i++){
        cout <<i <<endl;
    }
    */

/*
  int i = 1;
  for(; ; ){
    if(i <= n){
        cout << i << endl;
    }
    else {
        break;
    }
    i++;
}
*/

// Write the multiple condition
for(int a = 0, b = 1, c = 2; a>=0 && b>=1 && c>=2; a--, b--, c--){
    cout<<a <<" " << b <<endl;
 }
}