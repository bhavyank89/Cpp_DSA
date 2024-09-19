#include <bits/stdc++.h>
using namespace std;

class accountHolder
{
private:
    string name;

public:
    // constructor function
    accountHolder(string name)
    {
        cout << "constructor for : " << name << endl;
        this->name = name;
    }

    // destructor function
    ~accountHolder()
    {
        cout << "Destructor for : " << this->name << endl;
    }
};

int main()
{
    accountHolder A1("1"), A2("2"), A3("3");
    return 0;
}