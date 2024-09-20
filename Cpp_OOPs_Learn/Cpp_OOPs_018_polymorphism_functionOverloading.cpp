// Polymorphism : function overloading
#include <bits/stdc++.h>
using namespace std;

class Area
{
public:
    double calculateArea(double r)
    {
        return 3.14 * r * r;
    }
    double calculateArea(double l, double b)
    {
        return l * b;
    }
};

int main()
{
    Area A1, A2;
    cout << "Area 1 : " << A1.calculateArea(4) << endl;
    cout << "Area 2 : " << A2.calculateArea(2, 4) << endl;
    return 0;
}