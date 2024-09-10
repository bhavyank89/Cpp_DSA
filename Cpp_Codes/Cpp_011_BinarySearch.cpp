// BinarySearch is only applicable to sorted array only
// i.e, either asscending or descending order
#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;

    // Determine whether the array is sorted in ascending or descending order
    bool isAscending = arr[start] < arr[end];

    while (start <= end)
    {
        int middle = start + (end - start) / 2;

        // If key is found at middle
        if (arr[middle] == key)
        {
            return middle;
        }

        // For ascending sorted array
        if (isAscending)
        {
            if (key > arr[middle])
            {
                start = middle + 1;
            }
            else
            {
                end = middle - 1;
            }
        }
        // For descending sorted array
        else
        {
            if (key > arr[middle])
            {
                end = middle - 1;
            }
            else
            {
                start = middle + 1;
            }
        }
    }

    return -1;
}

int main()
{
    int size;
    cout << endl
         << "Enter the size of the element : ";
    cin >> size;

    int arr[size];
    cout << "Enter monotonic array only : ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << "Enter any key to search : ";
    cin >> key;

    int result = binarySearch(arr, size, key);
    if (result == -1)
    {
        cout << "The Key is not present";
    }
    else
    {
        cout << "The key is present at index of : " << result;
    }
}