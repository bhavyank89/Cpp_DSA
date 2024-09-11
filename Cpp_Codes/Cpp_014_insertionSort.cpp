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
void insertionSortArr(int arr[], int size)
{
    // TC - O(n^2),omega(n), SC - O(1)
    for (int i = 1; i < size; i++) // start unsorted array from index 0 to size - 1
    {
        int temp = arr[i];              // store the first element of unsorted array as temp
        int j = i - 1;                  // start checking from unsoted arrays maximum index to index 0
        while (j >= 0 && arr[j] > temp) // go till index 0 and check if left element is greater than temp or not
        {
            arr[j + 1] = arr[j]; // if greater, than shift element at index j to index j+1
            j--;                 // check for lower element as well
        }
        arr[j + 1] = temp; // where ever arr[j]<temp, set one index ahead of j as temp
    }
}
int main()
{

    int n = 0;

    cout << "Enter array Size : ";
    cin >> n;

    int arr[n];

    takeArray(arr, n);
    printArray(arr, n, "Array");

    insertionSortArr(arr, n);
    printArray(arr, n, "insertionSortArr");

    return 0;
}