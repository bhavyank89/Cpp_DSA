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
void mergeSingleArr_dualSorted(int arrA[], int arrB[], int m)
{
    // TC - O(m),SC - O(1)
    int i = 0, j = 0, k = 0;
    int a, b;
    // i - index pointing to first subsorted arrA1[]
    // j - index pointing to second subsorted arrA2[]
    // k - index pointing to arrB
    // a - size of first subsorted arrA1[]
    // b - size of second subsorted arrA2[]

    // finding the starting index of subsorted arrA2[], size of subsorted arrA1[] and arrA2[]
    for (int p = 0; p < m - 1; p++)
    {
        if (arrA[p + 1] < arrA[p])
        {
            j = p + 1; // starting index of subsorted arrA2[]
            a = j;     // size of subsorted arrA1[] is j
            b = m - j; // size of subsorted arrA2[] is m - j
            break;
        }
    }

    while (i < a && j < m)
    {
        // Compare elements of both sorted arrays and merge accordingly
        // till the iteration of any one of the arrays is complete
        if (arrA[i] >= arrA[j])
        {
            // if arrA2[] element is smaller than arrA1[] element,
            // then put the smaller element in arrB[]
            arrB[k] = arrA[j];
            k++;
            j++;
        }
        else
        {
            // if arrA1[] element is smaller than arrA2[] element,
            // then put the smaller element in arrB[]
            arrB[k] = arrA[i];
            k++;
            i++;
        }
    }

    // if arrA1[] is left uniterated completely,
    // then copy all the remaining elements of arrA1[] to arrB[]
    while (i < a)
    {
        arrB[k] = arrA[i];
        i++;
        k++;
    }

    // if arrA2[] is left uniterated completely,
    // then copy all the remaining elements of arrA2[] to arrB[]
    while (j < m)
    {
        arrB[k] = arrA[j];
        j++;
        k++;
    }
}
int main()
{
    // arrA[] - array that contain two subarray that are sorted
    // arrB[] - sorted array formed by merging two sorted subarray
    int m = 0;

    cout << "Size arrA[] : ";
    cin >> m;

    int arrA[m], arrB[m];

    takeArray(arrA, m, "arrA[]");
    printArray(arrA, m, "arrA[]");

    mergeSingleArr_dualSorted(arrA, arrB, m);
    printArray(arrB, m, "arrB[]");

    return 0;
}