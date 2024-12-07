#include <bits/stdc++.h>
using namespace std;
// TC - O(n^2)
// SC - O(n) - due to recursive call
void printArray(int arr[], int size, string title = "Array", int i = 0)
{
    if (i == size)
    {
        cout << endl;
        return;
    }
    if (i == 0)
    {
        cout << title << " : ";
    }
    cout << arr[i] << " ";
    printArray(arr, size, title, i + 1);
}
void bubbleSort_recursive_swap(int arr[], int start, int end)
{
    for (int j = start; j < end; j++)
        if (arr[j + 1] < arr[j])
            swap(arr[j + 1], arr[j]);
}
void bubbleSort_recursive(int arr[], int start, int end)
{
    if (start >= end)
        return;
    bubbleSort_recursive_swap(arr, start, end);
    bubbleSort_recursive(arr, start, end - 1);
}

int main()
{

    cout << endl
         << "Bubble Sort (recursive) : " << endl;

    int arr1[] = {34, -22, 12, 79, -2};
    int arr2[] = {12, 45, -3, 46, 11, 8};

    printArray(arr1, 5, "arr1");
    printArray(arr2, 6, "arr2");

    bubbleSort_recursive(arr1, 0, 4);
    bubbleSort_recursive(arr2, 0, 5);

    printArray(arr1, 5, "sorted arr1");
    printArray(arr2, 6, "sorted arr2");

    return 0;
}