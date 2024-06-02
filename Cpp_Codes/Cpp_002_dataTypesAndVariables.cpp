#include <iostream>
using namespace std;
/*
    Time Complexicity - O(1)
    Space Complexicity - O(1)
*/
int main()
{
    cout << "\nHello World\n"
         << endl;

    int a = 12345;
    cout << a << endl;
    char b = 'a';
    cout << b << endl;
    float d = 3.14;
    cout << d << endl;
    double e = 13.12;
    cout << e << endl;

    cout << "Size of int is : " << sizeof(a) << endl;
    cout << "Size of char is : " << sizeof(b) << endl;
    cout << "Size of float is : " << sizeof(d) << endl;
    cout << "Size of double is : " << sizeof(e) << endl;

    char as = 97;
    // 4294967295
    cout << as << endl;
}