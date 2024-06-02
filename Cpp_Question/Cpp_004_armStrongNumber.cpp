#include <bits/stdc++.h>
using namespace std;

bool checkArmstrong(int n)
{
    int num = n, digitSqrSum = 0, len = (int)(log10(n) + 1);
    while (num != 0)
    {
        digitSqrSum = digitSqrSum +  (int)pow(num % 10, len);
        num = num / 10;
    }
    return digitSqrSum == n;
}
int main()
{
    int n =371;
    cout<<checkArmstrong(n)<<endl;
    if (checkArmstrong(n))
        cout << "ArumStrong Number" << endl;
    else
        cout << "Not an ArumStrong Number" << endl;
    return 0;
}