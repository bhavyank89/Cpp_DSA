#include <bits/stdc++.h>
using namespace std;

// Constructor is function which is invoked during object creation or allocation
// must be code in public access modifier
// It has no return type
// name of constructor is same as className
// constructor is mainly used to initialise values
class accountHolder
{
private:
    string name;
    int accountNumber;
    double balance;

public:
    // default constructor
    accountHolder()
    {
        cout << "constructorCalled!!!" << endl;
        this->name = "Thon";
        this->accountNumber = 1613207;
        this->balance = 1000;
        // this keyword is a pointer that points to the object itself.
    }

    // parameterised constructor
    accountHolder(string name, int accountNumber, int balance)
    {
        cout << "parameterisedConstructorCalled!!!" << endl;
        this->name = name;
        this->accountNumber = accountNumber;
        this->balance = balance;
    }

    // inline constructor
    // you can may or may not mention inline before constructor
    inline accountHolder(string name, int accountNumber) : name(name), accountNumber(accountNumber), balance(0)
    {
        cout << "inlineConstructorCalled!!!" << endl;
    }

    // copy constructor
    // "&" is used as to refer the account provided as a parameter
    accountHolder(accountHolder &account)
    {
        this->name = account.name;
        this->accountNumber = account.accountNumber;
        this->balance = account.balance;
    }

    // member function
    void display()
    {
        cout << "Account Details : " << endl;
        cout << this->name << endl;
        cout << this->accountNumber << endl;
        cout << this->balance << endl;
        cout << endl;
    }
};

int main()
{
    accountHolder account1; // default constructor called
    account1.display();

    accountHolder account2("John", 1613208, 1000); // parameterised constructor called
    account2.display();

    accountHolder account3("Rhon", 1613209); // inline constructor called
    account3.display();

    // copy account3 details in account4 using copy constructer created
    accountHolder account4(account3); // copy constructor called
    account4.display();

    /*
        We can copy one object data into another data even by not creating copy constructor. In such case, compiler creates its default copy construtor

        - method_1
        >> accountHolder account5(account4);

        - method_2
        >> accountHolder account5;
        >> account5 = account4;

        - method_3
        creating ourOwn copy constructor

        // in class block
        >> accountHolder(accountHolder &account){
            this->name = account.name;
            this->accountNumber = account.accountNumber;
            this->balance = account.balance;
        }

        // in main block
        accountHolder account5(account4);
    */

    return 0;
}