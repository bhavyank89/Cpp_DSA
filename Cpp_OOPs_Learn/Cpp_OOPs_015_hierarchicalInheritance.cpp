#include <bits/stdc++.h>
using namespace std;

// hierarchical Inheritance
class Species
{
protected:
    string name;
    int age;
    string gender;
};

class Human : public Species
{
public:
    // prameterised constructor
    Human(string name, int age, string gender)
    {
        this->name = name;
        this->age = age;
        this->gender = gender;
    }
    // member function
    void display()
    {
        cout << "Displaying Human : " << endl;
        cout << "Name : " << this->name << endl;
        cout << "Age : " << this->age << endl;
        cout << "Gender : " << this->gender << endl;
    }
};

class Animal : public Species
{
public:
    // prameterised constructor
    Animal(string name, int age, string gender)
    {
        this->name = name;
        this->age = age;
        this->gender = gender;
    }
    // member function
    void display()
    {
        cout << "Displaying Animal : " << endl;
        cout << "Name : " << this->name << endl;
        cout << "Age : " << this->age << endl;
        cout << "Gender : " << this->gender << endl;
    }
};

class Plants : public Species
{
public:
    // prameterised constructor
    Plants(string name, int age, string gender)
    {
        this->name = name;
        this->age = age;
        this->gender = gender;
    }
    // member function
    void display()
    {
        cout << "Displaying Plant : " << endl;
        cout << "Name : " << this->name << endl;
        cout << "Age : " << this->age << endl;
        cout << "Gender : " << this->gender << endl;
    }
};

int main()
{
    Human Kavya("Kavya", 21, "F");
    Kavya.display();

    Animal Tiger("Tiger", 32, "M");
    Tiger.display();

    Plants Banyan("Banyan", 50, "None");
    Banyan.display();

    return 0;
}