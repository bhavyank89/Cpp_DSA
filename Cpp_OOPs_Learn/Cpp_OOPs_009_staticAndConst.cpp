#include <bits/stdc++.h>
using namespace std;

/*
    Static Data member is initialised only once and is shared among every object created
*/

class accountHolder
{
private:
    string name;
    int accountNumber;
    double balance;
    const string bankName = "SBI";
    // const keyword is used to set a constant variable for all the object without re-initiallisation
    static int totalAccount; // creating static data memeber
    // using static keyword, totalAccount belongs to class and not the object

public:
    static int totalBalance;

    // prameterised constructor
    accountHolder(string name, int accountNumber, int balance)
    {
        this->name = name;
        this->accountNumber = accountNumber;
        this->balance = balance;

        (this->totalAccount)++;
        (this->totalBalance) += balance;
    }

    // all static members are accessed using static function
    // static member only have access to static member and no other members
    static void finalChart()
    {
        cout << "Total Account : " << totalAccount << endl;
        cout << "Total balance : " << totalBalance << endl;
    }

    // member function
    void display()
    {
        cout << "Account Details : " << endl;
        cout << this->name << endl;
        cout << this->accountNumber << endl;
        cout << this->balance << endl;
        cout << this->bankName << endl;
        cout << endl;
    }
};

// initialising static dataMember
int accountHolder::totalAccount = 0;
int accountHolder::totalBalance = 0;

int main()
{

    accountHolder account1("Rhon", 1613206, 1000);
    accountHolder account2("Thon", 1613206, 900);
    accountHolder account3("John", 1613207, 800);

    /*
    // accountHolder::totalAccount = 5; // cannot access private static member directly
    // can only access using static function
    accountHolder::totalBalance = 2310;
    cout << accountHolder::totalBalance << endl;
    */
    account1.display();
    accountHolder::finalChart();

    return 0;
}