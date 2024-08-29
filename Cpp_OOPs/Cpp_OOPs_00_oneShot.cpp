#include <bits/stdc++.h>
using namespace std;

class Hero
{
private:
    int health;
    string rank;

public:
    int level;
    string name;
    void display(void);

    /*
        // Constructor
        - constructor is called whenever a new object is created.
        - constructor has no input parameter and return type.
        - constructor is byDefault created whenever object is created.
        - If we create our own constructor the the default construction is not created.

    */
    Hero()
    {
        cout << "Default Constructor called.." << endl;
        cout << "this -> " << this << endl;
        this->rank = "Bronze";
    }
    // Parameterised Constructor
    /*
        this keyword
        - this keyword at as pointer and stores the address of the most recent object
    */
    Hero(string rank)
    {
        cout << "Parameterised Constructor called..." << endl;
        cout << "this -> " << this << endl;
        this->rank = rank;
    }
    // Copy Constructor
    /*
        - byDefault created.
        - called when a new object is created when we have parameter of the object that needs to be copied in the new object created.
        - can also be created.

        - the default copy constructor perform shallow copy.
    */
    Hero(Hero &object)
    {
        cout << "Copy Constructor called..." << endl;
        cout << "this -> " << this << endl;
        this->name = object.name;
        this->health = object.health;
        this->level = object.level;
        this->rank = object.rank;
    }

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
    cout << "Rank : " << rank << endl;
}

int main()
{

    Hero spiderman("Silver"); // Static allocation
    cout << "Address of spiderman : " << &spiderman << endl;
    spiderman.name = "Spiderman";
    spiderman.level = 5;
    spiderman.setHealth(93);
    spiderman.display();

    cout << endl;

    Hero *blackAdam = new Hero("Gold"); // dynamic allocation
    cout << "Address of blackAdam : " << &(*blackAdam) << endl;
    (*blackAdam).name = "blackAdam";
    blackAdam->level = 4;
    blackAdam->setHealth(92);
    (*blackAdam).display();

    cout << endl;

    Hero shazam(spiderman); // copy objects
    // Hero shazam = spiderman;
    cout << "Address of shazam : " << &shazam << endl;
    shazam.name = "Shazam";
    shazam.display();

    cout << endl;

    // To understand shallow copy comment out the copy Constructor created
    // Shallow copy is done in the case of default copy constructor.
    cout << "Understanding Shallow copy " << endl;
    // creating hero1
    Hero hero1;
    cout << "Address of hero1 : " << &hero1 << endl;
    hero1.name = "hero1";
    hero1.level = 4;
    hero1.setHealth(89);
    hero1.display();

    cout << endl;

    // copying hero1 to hero2
    Hero hero2 = hero1;
    cout << "Address of hero2 : " << &hero2 << endl;
    hero2.display();
    cout << endl;

    // changing hero1 data and displaying
    hero1.name[0] = 'H';
    hero1.display();
    cout << endl;

    // hero2 data automatically gets changed
    hero2.display();
    cout << endl;

    // copying using copy assignment opperator
    Hero hero3;
    cout << "Address of hero3 : " << &hero3 << endl;
    hero3.name = "America";
    hero3.setHealth(76);
    hero3.level = 3;
    hero3.display();
    cout << endl;

    Hero hero4;
    cout << "Address of hero4 : " << &hero4 << endl;
    hero4.name = "Norvay";
    hero4.setHealth(86);
    hero4.level = 4;
    hero4.display();
    cout << endl;

    hero4 = hero3;
    hero3.display();
    cout << endl;
    hero4.display();
    cout << endl;

    return 0;
}