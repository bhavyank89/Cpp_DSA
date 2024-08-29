#include <bits/stdc++.h>
using namespace std;

class Hero
{
private:
    int health;

public:
    int level;
    string name;
    void display(void);

    // getter and setter
    /*
        getter and setter provides the access of the private member outside the class component
    */
    int getHealth(void)
    {
        return health;
    }
    int setHealth(int h)
    {
        health = h;
    }
};

void Hero ::display()
{
    cout << "Name : " << name << endl;
    cout << "Health : " << health << endl;
    cout << "level : " << level << endl;
}

int main()
{

    Hero spiderman; // Static allocation
    spiderman.name = "Spiderman";
    spiderman.level = 5;
    spiderman.setHealth(93);
    spiderman.display();

    cout << endl;

    Hero *blackAdam = new Hero; // dynamic allocation
    (*blackAdam).name = "blackAdam";
    blackAdam->level = 4;
    blackAdam->setHealth(92);
    (*blackAdam).display();

    return 0;
}