#include <bits/stdc++.h>
using namespace std;

class Human
{
protected:
    string name;

public:
    void introduce() { cout << "Myself : " << name << endl; }
};

class Employee : public Human
{
protected:
    int salary;

public:
    void getSalary()
    {
        cout << "Salary : " << salary << endl;
    }
};

class Manager : public Employee
{
protected:
    string department;

public:
    Manager(string name, int salary, string department)
    {
        this->name = name;
        this->salary = salary;
        this->department = department;
    }

    void getDepartment()
    {
        cout << "Department : " << department << endl;
    }

    void display()
    {
        cout << "Displaying Manager : " << endl;
        this->introduce();
        this->getSalary();
        this->getDepartment();
    }
};

int main()
{
    Manager Rohit("Rohit", 55000, "Accounts");
    Rohit.display();
    return 0;
}