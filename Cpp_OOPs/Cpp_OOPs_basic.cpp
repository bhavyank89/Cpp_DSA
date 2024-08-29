#include <bits/stdc++.h>
using namespace std;
/*
    Difference between struct and class
    - Struct can be accessed from anywhere inside the code.
    - class provides a security feature as from where the class can be accessed

    - In struct we cannot add function while in class we does.
*/
/*
    Class is the templete that does not use any memory space until any object is created with this templete
*/
class Employee
{
private: // Can only be accessed inside Employee class
    int a, b, c;

public:
    int d, e;                             // Can be accessed anywhere within the code
    void setData(int a1, int b1, int c1); // Function can be initialized inside the class and declared somewhere in the program
    // Or it can be declared and initialised inside the class as well
    void getData()
    {
        cout << "The value of a : " << a << endl;
        cout << "The value of b : " << b << endl;
        cout << "The value of c : " << c << endl;
        cout << "The value of d : " << d << endl;
        cout << "The value of e : " << e << endl;
    }
};
void Employee ::setData(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    // creating object using the class
    Employee John;

    // accessing the public variable
    John.d = 12;
    John.e = 11;
    John.setData(22, 19, 07);
    John.getData();

    return 0;
}