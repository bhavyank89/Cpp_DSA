#include <bits/stdc++.h>
using namespace std;

class Nationality
{
protected:
    string citizenShip;
};
class Engineer : public virtual Nationality
{
protected:
    string course_Engineering;
};
class MBA : public virtual Nationality
{
protected:
    string course_MBA;
};
class Person : public Engineer, public MBA
{
protected:
    string name;

public:
    Person(string name, string citizenShip, string course_Engineering, string course_MBA)
    {
        this->name = name;
        this->citizenShip = citizenShip;
        this->course_Engineering = course_Engineering;
        this->course_MBA = course_MBA;
    }
    void display()
    {
        cout << "Displaying Person : " << endl;
        cout << "Name : " << this->name << endl;
        cout << "CitizenShip : " << this->citizenShip << endl;
        cout << "Engineering : " << this->course_Engineering << endl;
        cout << "MBA : " << this->course_MBA << endl;
    }
};

int main()
{
    Person Kavya("Kavya", "Indian", "4 years", "2 years");
    Kavya.display();
    return 0;
}