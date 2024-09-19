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
    string name;    
    string roll_number;
    int age;
    double cgpa;

public:
    void sayHello(){
        cout<<"Hello "<<name<<endl;
    }
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

    S1.sayHello();

    return 0;
}