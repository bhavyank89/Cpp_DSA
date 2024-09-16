#include <bits/stdc++.h>
using namespace std;
void mergeSingleArr(int arr[], int low, int mid, int high)
{
    int temp[high - low + 1];
    int i = low;     // starting index of first half
    int j = mid + 1; // starting index of second half
    int k = 0;       // index for temp array

    // Merge both halves into temp[]
    while (i <= mid && j <= high)
    {
        if (arr[i] >= arr[j])
        {
            temp[k++] = arr[j++];
        }
        else
        {
            temp[k++] = arr[i++];
        }
    }

    // Copy remaining elements of the first half, if any
    while (i <= mid)
    {
        temp[k++] = arr[i++];
    }

    // Copy remaining elements of the second half, if any
    while (j <= high)
    {
        temp[k++] = arr[j++];
    }

    // Copy the merged array back to the original array
    for (int i = 0; i < k; i++)
    {
        arr[low + i] = temp[i]; // Adjust with the low offset
    }
}

void mergeSortArr(int arr[], int low, int high)
{
    // Time Complexity:
    //  - Best Case: O(n log n)
    //  - Average Case: O(n log n)
    //  - Worst Case: O(n log n)

    // Space Complexity:
    // - O(n) --> as a temp array is created
    if (low >= high)
        return;

    int mid = low + (high - low) / 2; // Calculate mid to avoid overflow

    mergeSortArr(arr, low, mid);         // Sort first half
    mergeSortArr(arr, mid + 1, high);    // Sort second half
    mergeSingleArr(arr, low, mid, high); // Merge the sorted halves
}
int main()
{
    int m = 0; // size of arrA[]
    cout << "Size arrA[] : ";
    cin >> m;

    // arrA[] - unsorted array
    int arrA[m];
    takeArray(arrA, m, "arrA[]");

    int low = 0;      // lowest index of arrA[]
    int high = m - 1; // highest index of arrA[]

    mergeSortArr(arrA, low, high);
    printArray(arrA, m, "arrA[]");

    return 0;
}