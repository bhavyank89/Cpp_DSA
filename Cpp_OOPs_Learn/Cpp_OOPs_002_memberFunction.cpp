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
private:
    string name = "John";

public:
    void sayHello()
    {
        cout << "Hello " << name << endl;
    }
};

int main()
{
    // creating object using class
    Student S1;

    // accessing public members of the class
    S1.sayHello();

    return 0;
}