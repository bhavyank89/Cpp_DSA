#include <bits/stdc++.h>
using namespace std;

int factN(int n)
{
    /*
        TimeComplexicity - O(n)     --> Function called n times
        SpaceComplexicity - O(n)    --> stack space used n times
    */
    if (n == 0)
        return 1;
    return n * factN(n - 1);
}

int main()
{

    int n = 10;
    cout<<"factN : "<<factN(n)<<endl;


    return 0;
}