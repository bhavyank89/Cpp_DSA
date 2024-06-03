#include <bits/stdc++.h>
using namespace std;

int gcd1(int n1, int n2)
{
    /*
        Approach-1
        TimeComplexicity - O(min(n1,n2))
        SpaceComplexicity -O(1)
    */
    int gcdValue = 1;
    for (int i = 1; i <= min(n1, n2); i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
            gcdValue = i;
    }
    return gcdValue;
}
int gcd2(int n1, int n2)
{
    /*
        Approach-2(Euclidean Algorithm)
        TimeCoplexicity - O(log(min(a,b)) to base pfahi)
        SpaceComplexicty - O(1)
    */
    int a = max(n1, n2);
    int b = min(n1, n2);
    int gcdValue = 1;
    while (a > 0 && b > 0)
    {
        (a > b) ? a = a % b : b = b % a;
    }
    if (a == 0)
        gcdValue = b;
    else
        gcdValue = a;
    return gcdValue;
}

int main()
{
    int n1 = 10, n2 = 13;
    cout << "Greatest Common Divisior : " << __gcd(n1, n2) << endl;
    cout << "Greatest Common Divisior : " << gcd1(n1, n2) << endl;
    cout << "Greatest Common Divisior : " << gcd2(n1, n2) << endl;
    cout << "Least Common Multiple : " << n1 * n2 / gcd2(n1, n2) << endl;

    return 0;
}