#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int age;
};

int main()
{

    // dynamic memory allcation to pointer S1
    Student *S1 = new Student;

    // accessing member using function
    // both syntex is valid
    (*S1).name = "John";
    S1->age = 19;

    cout << S1->name << endl;
    cout << (*S1).age << endl;

    return 0;
}