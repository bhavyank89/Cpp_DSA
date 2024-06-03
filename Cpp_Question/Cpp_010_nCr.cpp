#include <bits/stdc++.h>
using namespace std;

int fact(int a)
{
    if (a == 0)
    {
        return 1;
    }
    return (a * fact(a - 1));
}

double calculate_nCr(int n, int r)
{

    return fact(n) / (fact(r) * fact(n - r));
}

int main()
{
    int n, r;
    cout << endl
         << "Enter a n and r : ";
    cin >> n >> r;

    if( (n<r) || (n<=0) || (r<0) ){
        cout<<"enter valid entities!";
    }

    double nCr = calculate_nCr(n, r);
    cout << "Result : " << nCr;
    cout<<"Hello"<<endl;
}