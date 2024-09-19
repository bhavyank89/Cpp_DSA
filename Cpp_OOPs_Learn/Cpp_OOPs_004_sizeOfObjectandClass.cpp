#include <bits/stdc++.h>
using namespace std;
// Size depends on the Operating system and compiler
class class1
{
    // it is an empty class
};
class class2
{
    int a; // sizeof(int) == 4
    int b; // sizeof(int) == 4
};
class class3
{
    int a;
    char b;
};
class class4
{
    int a;
};
class class5
{
    char a;
    int b;
    char c;
};

int main()
{

    // class is juct a blueprint and does not take any space
    // object takes space

    class1 object1;
    class2 object2;
    class3 object3;
    class4 object4;
    class5 object5;

    cout << sizeof(object1) << endl; // empty class takes size of 1 byte
    cout << sizeof(object2) << endl; // class2 takes size of 2 byte
    cout << sizeof(object3) << endl;
    cout << sizeof(object4) << endl;
    cout << sizeof(object5) << endl;
    /*
        Since our object2, object3, object4 must take only 8 byte, 5 byte and 4 byte space respectievely.Instead it takes 8 bytes.
        The reason for this is the concept of padding

        depending upon the number of bits processed by operating system (32 bit or 64 bit) the size of object is initialised

        for 32 bit OS - it reads 4 bytes of data in one clock cylce
        for 64 bit OS - it reads 8 bytes of data in one clock cylce

        Hence for object2 size allocated is multiple of 4 bytes
        similarly for object3 and object4 we can find size

        The extra memory space taken by operating system is called padding

    */
    return 0;
}