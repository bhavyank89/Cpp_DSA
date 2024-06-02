#include <iostream>
using namespace std;
/*
    Time Complexicity - O(1)
    Space Complexicity - O(1)
*/
int main()
{
    int a, b;
    cout << "enter a and b";
    cin >> a;
    cin >> b;
    // cin >> n;
    // cout << "Value of n is : " << n << endl;
    if (a > b)
    {
        cout << "a is greater than b" << endl;
    }
    else
    {
        cout << "a is less than b" << endl;
    }
}