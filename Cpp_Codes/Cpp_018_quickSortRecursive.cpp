#include <bits/stdc++.h>
using namespace std;

void takeArray(int arr[], int size, string title = "array", int i = 0)
{
    // TC - O(n),SC - O(n) --> n = size
    if (i == size)
        return;
    if (!i)
        cout << "Enter " << title << " : ";
    cin >> arr[i];
    takeArray(arr, size, title, i + 1);
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

int placePivotElement(int arr[], int low, int high)
{
    int pivot = arr[low]; // pivot is a value, not an index
    int i = low;
    int j = high;

    while (i < j)
    {
        // Find element larger than pivot from the left
        while (arr[i] <= pivot && i < high)
            i++;

        // Find element smaller than pivot from the right
        while (arr[j] > pivot && j > low)
            j--;

        // Swap elements if indices haven't crossed
        if (i < j)
            swap(arr[i], arr[j]);
    }

    // Place the pivot in its correct position
    swap(arr[low], arr[j]);

    return j; // Return the index of the pivot
}

void quickSort(int arr[], int low, int high)
{
    // TC - O(nlog(n)),SC - O(1)
    if (low < high)
    {
        int pivotIndex = placePivotElement(arr, low, high); // Get pivot index
        quickSort(arr, low, pivotIndex - 1);                // Sort left subarray
        quickSort(arr, pivotIndex + 1, high);               // Sort right subarray
    }
}
int main({
    int m = 0;
    cout << "Enter size : ";
    cin >> m;
    int low = 0;
    int high = m - 1;
    int arrA[m];
    takeArray(arrA, m, "arrA[]");
    printArray(arrA, m, "arrA[]");

    quickSort(arrA, low, high);
    printArray(arrA, m, "sorted arrA[]");
    return 0;
})