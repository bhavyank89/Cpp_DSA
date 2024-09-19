#include <bits/stdc++.h>
using namespace std;

/*
    Destructor is a function that is invoked whenever the object is destroyed
    Destructor do not clean up the static space alloacted to the object but, it cleans up the dynamic allocated memory assigned to any variable.

*/

class accountHolder
{
private:
    string name;
    int *balance; // initialising a pointer

public:
    // parameterised constructor function
    accountHolder(string name, int bal)
    {
        cout << "parameterised constructor called!!" << endl;
        this->name = name;
        this->balance = new int; // dynamic allocating int size to the pointer
        *(this->balance) = bal;  // storing the value of balance to the memory address pointed by pointer
    }

    // destructor function
    ~accountHolder()
    {
        cout << "destructed is called!!" << endl;
        delete this->balance;
        // deletes the dynamic memory allocated
    }

    // member function
    void display()
    {
        cout << "Name : " << this->name << endl;
        cout << "pointer : " << this->balance << endl;    // displays the address of the dynamic memory allocated
        cout << "Balance : " << *(this->balance) << endl; // prints the value stored in the memory allocated
    }
};

int main()
{
    accountHolder account1("John", 1000);
    account1.display();

    return 0;
}