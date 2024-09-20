#include <bits/stdc++.h>
using namespace std;

class Complex
{
private:
    int real;
    int img;

public:
    // default constructor function
    Complex() {};

    // parameterised constructor function
    Complex(int real, int img)
    {
        this->real = real;
        this->img = img;
    }

    // member function
    // operation overloading
    Complex operator+(Complex &operand2)
    {
        Complex ans;
        ans.real = this->real + operand2.real;
        ans.img = this->img + operand2.img;
        return ans;
    }

    // member function
    void display()
    {
        cout << "Complex output : ";
        cout << this->real << " + " << this->img << "j" << endl;
    }
};

int main()
{
    Complex C1(2, 4);
    Complex C2(6, 7);

    Complex C3 = C1 + C2;
    C3.display();

    return 0;
}