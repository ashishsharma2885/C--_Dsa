#include<iostream>
using namespace std;

class Hero{
    // properties
    private:
    int health;
    public:
    char level;
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

    // static
    Hero a;
    a.setHelth(80);
    a.setLevel('B');
    cout << "level is" << a.level << endl;
    cout << "Health is " << a.getHealth() << endl;

    // dynamicaally
    Hero *b = new Hero;
    b->setLevel('A');
    b->setHelth(70);
    cout << "level is" << (*b).level << endl;
    cout << "Health is " << (*b).getHealth() << endl;

    cout << "level is" << b->level << endl;
    cout << "Health is " << b->getHealth() << endl;


    // creation of object
    // Hero Ashish;
    // cout << "Ashish health is " << Ashish.getHealth() << endl;
    // Ashish.setHelth(70);
    // // Ashish.health = 70;
    // Ashish.level = 'A';

    // cout << "health is: " << Ashish.getHealth()  << endl;
    // cout << "Level is: "  << Ashish.level << endl;

    // // cout << "size: " << sizeof(h1) << endl;

}
