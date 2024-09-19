#include <bits/stdc++.h>
using namespace std;

/*
    class is the user defined data type
    with class name Student. This class name is used
    as a data type in main() function to create object.
*/
// there are three types of access modifier - public, private and protected
// default access modifier is private
// private - memebrs can only accessed inside class block
// public - memeber can be accessed outside class block

class Student
{
public:
    string name;
    string roll_number;
    int age;
    double cgpa;
};

int main()
{
    // creating object using class
    Student S1;

    // modifying public members of the class
    S1.name = "John";
    S1.roll_number = "BT22ece123";
    S1.age = 19;
    S1.cgpa = 8.45;

    // accessing members from class
    cout << S1.name << endl;
    cout << S1.age << endl;
    cout << S1.roll_number << endl;
    cout << S1.cgpa << endl;

    return 0;
}