#include <bits/stdc++.h>
using namespace std;

void printPrimeTillN1(int n)
{
    /*
        Approach-1
        TimeComplexicity - O(n^2)
        SpaceComplexicity - O(1)
    */
    /*
        1 is not a prime number.
        The number 1 has only 1 factor.
        For a number to be classified as a prime number,
        it should have exactly two factors.
    */
    for (int i = 2; i <= n; i++)
    {
        int prime = true;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                prime = false;
            }
        }
        if (prime)
            cout << i << "  ";
    }
    cout << endl;
}
bool checkPrime1(int n)
{
    /*
        Approach-1
        TimeComplexicity - O(n)
        SpaceComplexicity - O(1)
    */
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
bool checkPrime2(int n)
{
    /*
        Approach-2(counter)(storing divisibilty count)
        TimeComplexicity - O(n)
        SpaceComplexicity - O(1)
    */
    int count = 0;
    for (int i = 1; i <= n; i++)
        if (n % i == 0)
            count++;
    if (count == 2)
        return true;
    return false;
}
bool checkPrime3(int n)
{
    /*
        Approach-3(counter modified)(storing factors count)
        TimeComplexicity - O(sprt(n))
        SpaceComplexicity - O(1)
    */
    int count = 0;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (n / i == i)
                count++;
            else
                count += 2;
        }
    }
    if (count == 2)
        return true;
    return false;
}
void printPrimeTillN2(int n)
{
    /*
        Approach-2
        TimeComplexicity - O(n^2)
        SpaceComplexicity - O(1)
    */
    for (int i = 2; i < n; i++)
    {
        if (checkPrime1(i))
            cout << i << " ";
        continue;
    }
}
int main()
{
    int n = 10;
    cout << checkPrime1(50) << endl;
    cout << checkPrime2(13) << endl;
    cout << checkPrime3(13) << endl;
    printPrimeTillN1(n);
    printPrimeTillN2(n);

    return 0;
}