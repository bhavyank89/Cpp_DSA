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
void merge2SortedArr(int arrA[], int arrB[], int arrC[], int m, int n)
{
    // TC - O(M+N),SC - O(1)
    int i, j, k;
    i = j = k = 0;
    // i - index pointing to arrA
    // j - index pointing to arrB
    // k - index pointing to arrC

    while (i < m && j < n) // Compare elements of both sorted array and merge accordingly till the itteration of any one of the array is complete
    {
        if (arrA[i] >= arrB[j]) // if arrB element is smaller than arrA element, then put the smaller element in the arrC
        {
            arrC[k] = arrB[j];
            j++;
            k++;
        }
        else // if arrA element is smaller than arrB element, then put the smaller element in the arrC
        {
            arrC[k] = arrA[i];
            i++;
            k++;
        }
    } // loop end when one of the sorted array is itterated completely and any one of the sorted is left to be itterated

    while (i < m) // if arrA is left unitterated completely than copy all the remaining elements of arrA to arrC
    {
        arrC[k] = arrA[i];
        i++;
        k++;
    }
    while (j < n) // if arrB is left unitterated completely than copy all the remaining elements of arrB to arrC
    {
        arrC[k] = arrB[j];
        j++;
        k++;
    }
}

int main()
{
    // merging two sortd array into single sorted arr
    // arrA[] - sorted array 1
    // arrB[] - sorted array 2
    // arrC[] - sorted merged array from arrA and arrB
    int n = 0, m = 0, o = 0;

    cout << "Size arrA[], arrB[] : ";
    cin >> m >> n;

    o = m + n;

    int arrA[m], arrB[n], arrC[o];

    takeArray(arrA, m, "arrA[]");
    takeArray(arrB, n, "arrB[]");

    printArray(arrA, m, "arrA[]");
    printArray(arrB, n, "arrB[]");

    merge2SortedArr(arrA, arrB, arrC, m, n);
    printArray(arrC, o, "ArrC[]");

    return 0;
}