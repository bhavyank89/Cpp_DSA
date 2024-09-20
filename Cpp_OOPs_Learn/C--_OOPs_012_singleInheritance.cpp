#include <bits/stdc++.h>
using namespace std;
// Single Inheritance
class Human
{
private:
    static int totalChild_Human;

protected:
    string name;
    int age;

public:
    // constructor function
    Human() { totalChild_Human++; }

    // member function
    static void display()
    {
        cout << "TotalChild_Human : " << totalChild_Human << endl
             << endl;
    }
};

int Human::totalChild_Human = 0;

class Student : public Human
{
private:
    string rollNo;

public:
    // constructor function
    Student(string name, int age, string rollNo)
    {
        this->name = name;
        this->age = age;
        this->rollNo = rollNo;
    }

    // member function
    void display()
    {
        cout << "Displaying Student : " << endl;
        cout << "Name : " << this->name << endl;
        cout << "Age : " << this->age << endl;
        cout << "RollNo : " << this->rollNo << endl
             << endl;
    }
};

int main()
{
    Student Kavya("Kavya", 21, "BT22ECE023");
    Kavya.display();
    Human::display();
    return 0;
}
