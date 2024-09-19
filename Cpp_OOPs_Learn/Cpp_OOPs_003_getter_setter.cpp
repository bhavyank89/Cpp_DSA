#include <bits/stdc++.h>
using namespace std;

class Student
{
private:
    string name;
    string roll_number;
    int age;
    double cgpa;

public:
    //  setter function
    void setName(string nameData)
    {
        name = nameData;
    }
    void setAge(int ageData)
    {
        age = ageData;
    }
    void setRollNumber(string rollNumber)
    {
        roll_number = rollNumber;
    }
    void setCgpa(double cgpaData)
    {
        cgpa = cgpaData;
    }

    // getter function
    void getData(string data = "")
    {
        if (data == "name")
        {
            cout << "Name : " << name << endl;
        }
        else if (data == "age")
        {
            cout << "Age : " << age << endl;
        }
        else if (data == "rollNumber")
        {
            cout << "Roll Number : " << roll_number << endl;
        }
        else if (data == "cgpa")
        {
            cout << "CGPA : " << cgpa << endl;
        }
        else
        {
            cout << "Name : " << name << endl;
            cout << "Age : " << age << endl;
            cout << "Roll Number : " << roll_number << endl;
            cout << "CGPA : " << cgpa << endl;
        }
    }
};

int main()
{
    // creating object using class
    Student S1;

    // calling setter member function
    S1.setName("John");
    S1.setAge(19);
    S1.setRollNumber("BT22ECE123");
    S1.setCgpa(8.74);

    // calling getter member function
    S1.getData();

    return 0;
}