#include<iostream>
using namespace std;

void reachHome(int desc, int source){

    cout << "source : " << source << " desc : " << desc << endl;

    // base case 
    if(source == desc){
       cout << "Pahuch gya" << endl;
       return;
    }

    // processing
    source++;

    // recursive call
    reachHome(desc, source);
}

int main(){
    int desc = 10;
    int source = 1;

    reachHome(desc, source);

    return 0;
}