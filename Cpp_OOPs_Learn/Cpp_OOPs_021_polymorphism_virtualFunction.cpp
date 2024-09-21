#include <iostream>
using namespace std;

class baseClass
{
public:
    int var_base = 4;

    // virtual function
    // virtual void display()
    // {
    //     cout << "1. Displaying base class variable var_base : " << var_base << endl;
    // }

    // pure virtual function
    virtual void display() = 0;

    // now baseClass is an abstract class
    /*
        Abstract class - class from which object cannot be created
                       - class that have atleast one virtual function
    */
};

class derivedClass : public baseClass
{
public:
    int var_derived = 2;

    void display()
    {
        cout << "2. Displaying base class variable var_base : " << var_base << endl;
        cout << "2. Displaying derived class variable var_derived : " << var_derived << endl;
    }
};

int main()
{
    // baseClass objBase;
    // once you declare a pure virtual function, we cannot declare baseClass.

    derivedClass objDerived;

    baseClass *pointerToBase = &objDerived;
    pointerToBase->display(); // Calls derived class display function.

    return 0;
}
