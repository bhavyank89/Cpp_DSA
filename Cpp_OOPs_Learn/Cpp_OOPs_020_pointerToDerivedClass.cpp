#include <iostream>
using namespace std;

class baseClass
{
public:
    int var_base = 4;

    void display()
    {
        cout << "1. Displaying base class variable var_base : " << var_base << endl;
    }
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
    baseClass objBase;
    derivedClass objDerived;

    // A pointer to base class that stores the address of a derived class object
    // In such cases, pointerToBase binds with the member function of baseClass, not derivedClass, unless it is virtual.
    baseClass *pointerToBase = &objDerived;
    pointerToBase->display(); // Calls base class display function

    /*
        To bind the display function of derived class, we use virtual function
    */

    return 0;
}
