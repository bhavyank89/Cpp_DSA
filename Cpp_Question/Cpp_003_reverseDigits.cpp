#include <bits/stdc++.h>
using namespace std;

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
int main()
{
    int n = -12356;
    string revN = to_string(n);
    cout << "ReversNumber : " << reverseNumber(n) << endl;
    cout << "ReversDigit : " << reverseDigits(n) << endl; // Approach-1(by reversing number and appending - sign at back)
    return 0;
}