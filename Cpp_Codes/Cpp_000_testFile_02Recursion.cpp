#include <bits/stdc++.h>
using namespace std;

void printStringN(string str, int n, int count)
{
    /*
        TimeComplexicity - O(n)     --> Function called n times
        SpaceComplexicity - O(n)    --> stack space used n times
    */
    count++;
    if (count <= n)
    {
        cout << str << endl;
        printStringN(str, n, count);
    }
    return;
}
int sumFirstN1(int n, int sum)
{
    /*
        Approach-1(parameterised way)
        TimeComplexicity - O(n)     --> Function called n times
        SpaceComplexicity - O(n)    --> stack space used n times
    */
    if (n == 0)
    {
        return sum;
    }
    else
    {
        sum = sum + n;
        n = n - 1;
        sumFirstN1(n, sum);
    }
}
int sumFirstN2(int n)
{
    /*
        Approach-2(function recursive way)
        TimeComplexicity - O(n)     --> Function called n times
        SpaceComplexicity - O(n)    --> stack space used n times
    */
    if (n == 0)
        return 0;
    return n + sumFirstN2(n - 1);
}
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
bool stringPalindrome(string str,int start,int end){
    if(end<=start)
    return true;
    else{
        if(str[start]!=str[end])
        return false;
        stringPalindrome(str,start++,end--);
    }
}
int main()
{

    int n = 10, count = 0, sum = 0;
    string name = "vaav";

    printStringN(name,n,count);
    cout<<"sumFirstN1 : "<<sumFirstN1(n,sum)<<endl;
    cout<<"sumFirstN2 : "<<sumFirstN2(n)<<endl;
    cout<<"factN : "<<factN(n)<<endl;

    int a = 0, b = 1;
    cout << a << " ";
    firstNfibo(a, b, n - 1);
    cout<<endl<<nthFibo(n-1)<<endl;

    if(stringPalindrome(name,name[0],name[name.size()-1]))
    cout<<name<<" is palindrome"<<endl;
    else
    cout<<name<<" is not a palindrome"<<endl;

    
    

    return 0;
}