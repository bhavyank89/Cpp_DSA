#include <bits/stdc++.h>
using namespace std;

void takeArray(int arr[], int i, int n)
{
    if (i == n)
        return;
    cin >> arr[i];
    takeArray(arr, i + 1, n);
}

void printArray(int arr[], int i, int n)
{
    if (i == n)
        return;
    cout << arr[i] << " ";
    printArray(arr, i + 1, n);
}

void reverseOrignArray(int arr[],int n,int start,int end){
    if(start>=end)
    return;
    int temp = arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    reverseOrignArray(arr,n,start+1,end-1);
}

bool checkPalindromeArr(int arr[],int start,int end){
    if(start>=end)
    return true;
    if(arr[start]!=arr[end])
    return false;
    checkPalindromeArr(arr,start+1,end-1);
}

bool checkPalindromeStr(string name,int start,int end){
    if(start>=end)
    return true;
    if(name[start]!=name[end])
    return false;
    checkPalindromeStr(name,start+1,end-1);
}

void printName(string name, int n)
{
    if (n == 0)
    {
        cout << endl;
        return;
    }
    cout << name << " ";
    printName(name, n - 1);
}

void print1toN(int i, int n)
{
    if (i > n)
    {
        cout << endl;
        return;
    }
    cout << i << " ";
    print1toN(i + 1, n);
}

void printNto1(int n)
{
    if (n == 0)
    {
        cout << endl;
        return;
    }
    cout << n << " ";
    printNto1(n - 1);
}

int sumFirstN(int n)
{
    if (n == 0)
        return 0;
    return n + sumFirstN(n - 1);
}

int factN(int n)
{
    if (n == 0)
        return 1;
    return n * factN(n - 1);
}

void fiboN(int a, int b, int n)
{
    if (n == 0)
        return;
    cout << b << " ";
    int temp = b;
    b = b + a;
    a = temp;
    fiboN(a, b, n - 1);
}

int fiboNth(int n){
    if(n<=1)
    return n;
    return fiboNth(n-1)+fiboNth(n-2);
}

int main()
{

    int n, i = 1;
    string name;
    cout << "Enter the counter Value: ";
    cin >> n;
    int arr[n];
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter Array: ";
    takeArray(arr, i - 1, n);
    cout<<"Entered Array: ";
    printArray(arr, i - 1, n);
    cout<<endl;

    int start = 0;
    int end = n-1;
    reverseOrignArray(arr,n,start,end);
    cout<<"Reversed Original Array: ";
    printArray(arr, i - 1, n);
    cout<<endl;

    printName(name, n);
    print1toN(i, n);
    printNto1(n);

    cout << "SumFirstN: " << sumFirstN(n) << endl;
    cout << "factN: " << factN(n) << endl;

    int a = 0;
    int b = 1;
    cout << "Fibonacci Series: " << a << " ";
    fiboN(a, b, n - 1);
    cout<<endl<<"Nth Fibonacci number : "<<fiboNth(n);

    start = 0,end = n-1;
    cout<<endl<<"PalindromeArr: "<<checkPalindromeArr(arr,start,end);
    start = 0,end = name.size()-1;
    cout<<endl<<"PalindromeStr: "<<checkPalindromeStr(name,start,end)<<endl;

    return 0;
}