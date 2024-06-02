// Binary Search
#include <bits/stdc++.h>
using namespace std;
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int binarySearch(int arr[], int size, int num)
{
    int start = 0;
    int end = size - 1;
    int middle = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[middle] == num)
            return middle;

        else if (num < arr[middle])
        {
            end = middle - 1;
        }
        else
        {
            start = middle + 1;
        }
        middle = start + (end - start) / 2;
    }
    return -1;
}

void selectionSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int min = INT_MAX;
        for (int j = i; j < size; j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
                arr[j] = arr[i];
                arr[i] = min;
            }
        }
    }
}
void bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main()
{
    int size = 8, num = -43;
    int arr[8] = {-100, 10, -43, -124, 2, -99, 12, 0};
    // selectionSort(arr, size);
    bubbleSort(arr, size);
    printArray(arr, size);
    cout << endl
         << "Element is present at index : " << binarySearch(arr, size, num) << endl;
    return 0;
}