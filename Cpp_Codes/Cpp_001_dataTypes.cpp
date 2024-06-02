#include <bits/stdc++.h>
using namespace std;
/*
    Time Complexicity - O(1)
    Space Complexicity - O(1)
*/
int main()
{
    // A char is stored in single quotes
    // A string is stored in double quotes

    int a = 1;
    unsigned int b = 2;
    short int c = 3;
    long long int d = 4;
    int e = 'a'; // Stored ASCII value of a(97)

    char f = 'b';
    float g = 12.23;
    double h = -1231.23123;
    long double i = -1231.23123;
    string j = "Hello world";

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    cout << e << endl;
    cout << f << endl;
    cout << g << endl;
    cout << h << endl;
    cout << i << endl;
    cout << j << endl;

    /*
        int is same as signed int
        Size of int = 4bytes/32bits - range of int pow(2,32) to pow(2,32)-1
        INT_MAX = 2147483647/pow(2,32)-1
        INT_MIN = -2147483648/-pow(2,32)

        Size of signed int = 4bytes/32bits - range of unsigned int 0 to pow(2,32)-1
    */

    cout << INT_MAX << endl;
    cout << INT_MIN << endl;

    cout << sizeof(a) << endl;
    cout << sizeof(b) << endl;
    cout << sizeof(c) << endl;
    cout << sizeof(d) << endl;
    cout << sizeof(e) << endl;
    cout << sizeof(f) << endl;
    cout << sizeof(g) << endl;
    cout << sizeof(h) << endl;
    cout << sizeof(i) << endl;
    cout << sizeof(j) << endl;
    cout << j.length() << endl;
    cout << j.size() << endl;

    return 0;
}