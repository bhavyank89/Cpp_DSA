#include <bits/stdc++.h>
using namespace std;

// parent Class
class Species
{
private:
    static int totalChild_Species;

protected:
    string name;
    int age;
    string gender;

public:
    string says;

    // constructor for species
    Species()
    {
        totalChild_Species++;
    }

    // member function
    static void display()
    {
        cout << "totalChild_Species : " << totalChild_Species << endl
             << endl;
        ;
    }
};
int Species::totalChild_Species = 0;

// child class Human
class Human : public Species
{
    /*
        totalChild_Species  -> cannot be accessed
        name, age, gender -> accessed as protected
        says -> accessed as public
    */
public:
    // prameterised constructor
    Human(string name, int age, string gender, string says)
    {
        this->name = name;
        this->age = age;
        this->gender = gender;
        this->says = says;
    }
    // member function
    void display()
    {
        cout << "Displaying Human : " << endl;
        cout << "Name : " << this->name << endl;
        cout << "Age : " << this->age << endl;
        cout << "Gender : " << this->gender << endl;
        cout << "Says : " << this->says << endl
             << endl;
    }
};

// child class Animal
class Animal : protected Species
{
    /*
        totalChild_Species  -> cannot be accessed
        name, age, gender -> accessed as protected
        says -> accessed as protected
    */
public:
    // prameterised constructor
    Animal(string name, int age, string gender, string says)
    {
        this->name = name;
        this->age = age;
        this->gender = gender;
        this->says = says;
    }
    // member function
    void display()
    {
        cout << "Displaying Animal : " << endl;
        cout << "Name : " << this->name << endl;
        cout << "Age : " << this->age << endl;
        cout << "Gender : " << this->gender << endl;
        cout << "Says : " << this->says << endl
             << endl;
    }
};

// child class Plants
class Plants : private Species
{
    /*
        totalChild_Species  -> cannot be accessed
        name, age, gender -> accessed as private
        says -> accessed as private
    */
public:
    // prameterised constructor
    Plants(string name, int age, string gender, string says)
    {
        this->name = name;
        this->age = age;
        this->gender = gender;
        this->says = says;
    }
    // member function
    void display()
    {
        cout << "Displaying Plant : " << endl;
        cout << "Name : " << this->name << endl;
        cout << "Age : " << this->age << endl;
        cout << "Gender : " << this->gender << endl;
        cout << "Says : " << this->says << endl
             << endl;
    }
};

int main()
{
    Human Kavya("Kavya", 21, "F", "Hello");
    Kavya.display();

    Animal Tiger("Tiger", 32, "M", "Roars");
    Tiger.display();

    Plants Banyan("Banyan", 50, "None", "water me!!");
    Banyan.display();

    // below give error
    // cout << Kavya.name << endl;  // name is protected
    // cout << Tiger.name << endl;  // name is protected
    // cout << Banyan.name << endl; // name is private

    Species::display();

    return 0;
}