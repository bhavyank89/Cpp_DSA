#include <bits/stdc++.h>
using namespace std;
/*
    0   1   1   2   3   5   8   13  .   .   .   .   .   .
    ^   ^   ^
    |   |   |
    a   b   nextfibbonaci

    nextfibonacci = a + b ;
    a = b ;
    b = nextfibonacci ;


*/
void firstNfibo(int a, int b, int n)
{
    /*
        TimeComplexicity - O(n)     --> Function called n times
        SpaceComplexicity - O(n)    --> stack space used n times
    */
    if (n == 0)
    {
        return;
    }
    cout << b << " ";
    int nextFibo = a + b;
    a = b;
    b = nextFibo;
    firstNfibo(a, b, n = n - 1);
}
int nthFibo(int n){
    /*
        TimeComplexicity - O(2^n)     --> each function call make two recursive call
        SpaceComplexicity - O(n)    --> stack space used n times
    */
    if(n<=1){
        return n;
    }
    return nthFibo(n-1)+nthFibo(n-2);
}
int main()
{

    int n = 10;

    int a = 0, b = 1;
    cout << a << " ";
    firstNfibo(a, b, n - 1);
    cout<<endl<<nthFibo(n-1)<<endl;

    return 0;
}