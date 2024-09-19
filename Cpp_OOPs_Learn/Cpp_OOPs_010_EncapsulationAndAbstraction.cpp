#include <bits/stdc++.h>
using namespace std;

/*
Encapsulation is a way to restrict the direct access to some components of an object,
so users cannot access state values for all of the variables of a particular object.
*/
/*
Abstraction in OOPS is used to hide unnecessary information and display only necessary information to the users interacting
*/

class accountHolder
{
private:
    string name;
    int age;
    int accountNumber;
    double balance;
    const string bankName = "SBI";

    static int totalAccount;
    static int totalBalance;

public:
    // Parameterized constructor
    accountHolder(string name, int accountNumber, int balance, int age)
    {
        if (name.length() < 3 || balance < 0 || age > 100 || age < 0)
        {
            cout << "Invalid data entered..." << endl
                 << endl;
        }
        else
        {
            this->name = name;
            this->accountNumber = accountNumber;
            this->balance = balance;
            this->age = age;

            totalAccount++;
            totalBalance += balance;
        }
    }

    // Static member function
    static void finalChart()
    {
        cout << "Total Accounts : " << totalAccount << endl;
        cout << "Total Balance : " << totalBalance << endl;
    }

    // Member function to deposit
    void deposite(int amount)
    {
        if (amount < 1)
        {
            cout << "Invalid deposit amount!!" << endl
                 << endl;
        }
        else
        {
            this->balance += amount;
            totalBalance += amount;
        }
    }

    // Member function to withdraw
    void withdraw(int amount)
    {
        if (amount > this->balance || amount < 1) // Checking against `this->balance`, not `totalBalance`
        {
            cout << "Invalid withdrawal amount!!" << endl
                 << endl;
        }
        else
        {
            this->balance -= amount;
            totalBalance -= amount;
        }
    }

    // Member function to display account details
    void display()
    {
        if (!(name.length() < 3 || balance < 0 || age > 100 || age < 0))
        {
            cout << "Account Details : " << endl;
            cout << "Name: " << this->name << endl;
            cout << "Account Number: " << this->accountNumber << endl;
            cout << "Balance: " << this->balance << endl;
            cout << "Bank Name: " << this->bankName << endl;
            cout << "Age: " << this->age << endl;
            cout << endl;
        }
    }
};

// Initializing static data members
int accountHolder::totalAccount = 0;
int accountHolder::totalBalance = 0;

int main()
{
    accountHolder account1("Rhon", 1613206, 1000, -42);
    accountHolder account2("Thon", 1613206, 900, 12);
    accountHolder account3("John", 1613207, 800, 51);

    account1.display();
    account2.display();
    account3.display();

    account3.withdraw(0);
    account2.deposite(1200);

    accountHolder::finalChart();

    return 0;
}
