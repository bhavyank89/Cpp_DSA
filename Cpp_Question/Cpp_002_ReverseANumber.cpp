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
int main()
{
    int n = -12356;
    string revN = to_string(n);
    cout << "ReversNumber : " << reverseNumber(n) << endl;
    return 0;
}