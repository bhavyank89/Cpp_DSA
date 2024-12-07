#include <bits/stdc++.h>
using namespace std;

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
void insertionSort_recursive_swap(int arr[], int end)
{
    int temp = arr[end];
    int i = end - 1;

    // Shift elements of the sorted part to make space for `temp`
    while (i >= 0 && arr[i] > temp)
    {
        arr[i + 1] = arr[i];
        i--;
    }

    // Place `temp` in its correct position
    arr[i + 1] = temp;
}
void insertionSort_recursive(int arr[], int start, int end)
{
    // Base case: If only one element or no elements remain, return
    if (start >= end)
        return;

    // Recursively sort the subarray from start to end - 1
    insertionSort_recursive(arr, start, end - 1);

    // Place the last element `arr[end]` in its correct position
    insertionSort_recursive_swap(arr, end);
}
int main()
{
    cout << endl
         << "Insertion Sort (recursive) : " << endl;

    int arr1[] = {34, -22, 12, 79, -2};
    int arr2[] = {12, 45, -3, 46, 11, 8};

    printArray(arr1, 5, "arr1");
    printArray(arr2, 6, "arr2");

    insertionSort_recursive(arr1, 0, 4);
    insertionSort_recursive(arr2, 0, 5);

    printArray(arr1, 5, "sorted arr1");
    printArray(arr2, 6, "sorted arr2");

    return 0;
}