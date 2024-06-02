#include <bits/stdc++.h>
using namespace std;

void printFirstN(int n)
{
    int i = 1;
    while (i <= n)
    {
        cout << i << "  ";
        i++;
    }
    cout << endl;
}
void printEvenTillN(int n)
{
    for (int i = 2; i <= n; i += 2)
        cout << i << "  ";
    cout << endl;
}
void printOddTillN(int n)
{
    for (int i = 1; i <= n; i += 2)
        cout << i << "  ";
    cout << endl;
}
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
int sumFirstN(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
        sum += i;
    return sum;
}
int sumEvenTillN(int n)
{
    int sum = 0;
    for (int i = 2; i <= n; i += 2)
        sum += i;
    return sum;
}
int sumOddTillN(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i += 2)
        sum += i;
    return sum;
}
int intLength(int n)
{
    // Approach-2
    /*
        TimeComplexicity - O(n)
        SpaceComplexicity - O(1)
    */
    int count = 1;
    while (n / 10 != 0)
    {
        n = n / 10;
        count++;
    }
    return count;
}
int reverseNumber(int n)
{
    int num = n, revNum = 0;
    while (num != 0)
    {
        // revNum = revNum*10(i.e appending revNum with 0) + lastDigit of num
        revNum = revNum * 10 + num % 10;
        num = num / 10;
    }
    return revNum;
}
string reverseDigits(int n)
{
    int revNum = reverseNumber(abs(n));
    string reverseNumString = to_string(revNum);
    if (n < 0)
        reverseNumString.push_back('-');
    return reverseNumString;
}
bool checkArmstrong(int n)
{
    int num = n, digitSqrSum = 0, len = (int)(log10(n) + 1);
    while (num != 0)
    {
        digitSqrSum = digitSqrSum + (int)pow(num % 10, len);
        num = num / 10;
    }
    return digitSqrSum == n;
}
void printDivisior1(int n)
{
    /*  Approach-1
        TimeComplexicity - O(n)
        SpaceComplexicity - O(1)
        Prints in shorted formate
    */
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            cout << i << "  ";
    }
    cout << endl;
}
void printDivisior2(int n)
{
    /*
        Approach-2
        TimeComplexicity - O(sqrt(n))
        SpaceComplexicity - O(1)
        prints in unsoreted order
        To short store each factors in vector and the short them
    */
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (i == n / i)
            cout << i << "  ";
        else if (n % i == 0)
            cout << i << "  " << n / i << "   ";
    }
    cout << endl;
}
void printVector(vector<int> v)
{

    // printing a vector
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
        cout << *(it) << "  ";
    cout << endl;
    /*
        Shorter syntex of printing a vector

        for(auto it : v)
        cout<<it<<" ";

    */
}
void printDivisior3(int n, vector<int> divisior)
{
    /*
        Approach-2(modified)
        TimeComplexicity - O(sqrt(n))
        SpaceComplexicity - O(m) where m are the number of factors
        prints in soreted order
    */
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (i == n / i)
        {
            divisior.push_back(i);
        }
        else if (n % i == 0)
        {
            divisior.push_back(i);
            divisior.push_back(n / i);
        }
    }
    sort(divisior.begin(), divisior.end()); // sorting a vector
    printVector(divisior);                  // printing vector
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
        for(int i=1;i<=n;i++)
            if(n%i==0)
                count++;
        if(count==2)
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
        for(int i=1;i<=sqrt(n);i++){
            if (n % i == 0) {
            if (n / i == i)
                count++;
            else
                count += 2;
        }
        }
        if(count==2)
            return true;
        return false;
    
}
void printPrimeTillN2(int n)
{
    /*
        Approach-1
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
    cout <<checkPrime1(50)<<endl;
    cout <<checkPrime2(13)<<endl;
    cout <<checkPrime3(13)<<endl;
    printPrimeTillN2(n);

    return 0;
}