#include <bits/stdc++.h>
using namespace std;

void takeArray(int arr[], int size, int i = 0)
{
    // TC - O(n),SC - O(n) --> n = size
    if (i == size)
        return;
    if (!i)
        cout << "Enter array : ";
    cin >> arr[i];
    takeArray(arr, size, i + 1);
}
void printArray(int arr[], int size, string title = "Array", int i = 0)
{
    // TC - O(n),SC - O(n) --> n = size
    if (i == size)
    {
        cout << endl;
        return;
    }
    if (!i)
        cout << title << " : ";
    cout << arr[i] << " ";
    return printArray(arr, size, title, i + 1);
}
void bubbleSortArr(int arr[], int size)
{ // bubbles up (pushes) the max element to the last index of itterating array
    // TC - O(n^2),omega(n), SC - O(1)
    for (int i = size; i > 0; i--)
    {
        int didSwap = 0;
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                didSwap = 1;
            }
        }
        if (!didSwap)
            break;
    }
}

int main()
{
    int n = 0, searchElement = 0;

    cout << "Enter array Size : ";
    cin >> n;

    int arr[n];

    takeArray(arr, n);
    printArray(arr, n, "Array");

    bubbleSortArr(arr, n);
    printArray(arr, n, "bubbleSortArr");
    return 0;
}
