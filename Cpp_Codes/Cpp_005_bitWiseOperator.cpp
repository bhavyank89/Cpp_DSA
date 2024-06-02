#include <iostream>
using namespace std;
/*
    Time Complexicity - O(1)
    Space Complexicity - O(1)
*/
int main()
{

    int a, b;
    cout << "Enter first number : ";
    cin >> a;
    cout << "Enter second number : ";
    cin >> b;

    cout << "\n";
    cout << "Values of a and b is : " << a << " " << b << endl;
    cout << "Bitwise end of a and b is : " << (a & b) << endl;
    cout << "Bitwise or of a and b is : " << (a | b) << endl;
    cout << "Bitwise not of a is : " << (~a) << endl;
    cout << "Bitwise not of b is : " << (~b) << endl;
    cout << "Bitwise xor of a and b is : " << (a ^ b) << endl;
    cout << "Left shift of a by 2 places is : " << (a << 2) << endl;
    cout << "right shift of a by 2 places is : " << (a >> 2) << endl;
    cout << "Values of a and b is : " << a << " " << b << endl;
}