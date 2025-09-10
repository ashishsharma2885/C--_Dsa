#include<iostream>
using namespace std;

class Hero{
    // properties
    private:
    int health;
    public:
    char level;

    // constructor
    Hero(){
        cout << "Constructor Called" << endl;
    }

    // parameterised Constructor
    Hero(int health ){
        cout << "this -> " << this << endl;
       this -> health = health;
    }

    void print(){
        cout << health << endl;
    }
    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }
    void setHelth(int h){
        health = h;
    }

    void setLevel(char ch){
        level = ch;
    }

};

int main(){

 // Object Created statical
  cout << "Hi" << endl;
  Hero ramesh(10);
  cout << "Address of ramesh" << &ramesh << endl;
  ramesh.getHealth();
  cout << "Hello" << endl;

}
