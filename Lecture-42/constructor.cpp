#include <iostream>
using namespace std;

class Hero
{
private:
    int health;

public:
    char level;

    // constructor
    Hero()
    {
        cout << "Simple Default Constructor called" << endl;
    }

    // parameterised Constructor
    Hero(int health)
    {
        cout << "this -> " << this << endl;
        this->health = health;
    }

    Hero(int health, char level)
    {
        this->level = level;
        this->health = health;
    }

    // copy conrsutor
    Hero(Hero& temp){
        cout << "Copy constuctor is called" << endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    void print()
    {
        cout << "health " << this->health << endl;
        cout << "level " << this->level << endl;
    }

    int getHealth()
    {
        return health;
    }

    char getLevel()
    {
        return level;
    }

    void setHealth(int h)
    {
        health = h;
    }

    void setLevel(char ch)
    {
        level = ch;
    }
};

int main()
{
    Hero S(70, 'C');
    S.print();

    Hero R(S); // Copy constructor
    R.print();

    // Object Created statical // cout << "Hi" << endl; 
    // Hero ramesh(10); 
    // cout << "Address of ramesh" << &ramesh << endl; 
    // ramesh.getHealth(); // cout << "Hello" << endl;

    return 0;
}
