#include <bits/stdc++.h>
using namespace std;

class accountHolder
{
private:
    string name;
    int accountNumber, balance;

public:
    // constructor function
    accountHolder(string name, int accountNumber, int balance)
    {
        this->accountNumber = accountNumber;
        this->balance = balance;
        this->name = name;
    }
    // deposite member function
    void deposite(int amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Rs" << amount << " credited successfully!!" << endl;
        }
        else
        {
            throw "please enter a positive amount!!";
        }
    }
    // withdraw member function
    void withdraw(int amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "Rs" << amount << " debited cuccessfully!!" << endl;
        }
        else if (amount > balance)
        {
            throw "your balance is low";
        }
        else
        {
            throw "pls enter positive amount!!";
        }
    }
};

int main()
{
    accountHolder Kavya("Kavya", 1613207, 5000);
    try
    {
        Kavya.deposite(100);
        Kavya.withdraw(-4);
    }
    catch (const char *error)
    {
        cout << "Error : " << error << endl;
    }

    return 0;
}