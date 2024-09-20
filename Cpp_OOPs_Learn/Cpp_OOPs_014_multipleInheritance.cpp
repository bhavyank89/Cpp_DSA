#include <bits/stdc++.h>
using namespace std;
// multiple Inheritance
class degree_Engineering
{
protected:
    string Engineering;

public:
    void grand_Engineering()
    {
        cout << "Awarded degree in Engineering!" << endl;
    }
};
class degree_MBA
{
protected:
    string MBA;

public:
    void grand_MBA()
    {
        cout << "Awarded degree in MBA!" << endl;
    }
};
class Person : public degree_Engineering, public degree_MBA
{
protected:
    string name;

public:
    Person(string name)
    {
        this->name = name;
    }
    void display()
    {
        cout << "Myself " << this->name << endl;
        grand_Engineering();
        grand_MBA();
    }
};

int main()
{
    Person Kavya("Kavya");
    Kavya.display();
    return 0;
}