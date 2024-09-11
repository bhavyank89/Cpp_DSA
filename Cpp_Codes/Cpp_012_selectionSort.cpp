#include <bits/stdc++.h>
using namespace std;

void getArr(int arr[], int size)
{
    cout << "Enter the array : ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    cout << endl;
}

void printArr(int arr[], int size, string s = " ")
{
    cout << "Your " << s << " array is : ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void selectionSort(int arr[], int size)
{
    // TC - O(n^2), SC - O(1)
    for (int i = 0; i < size; i++)
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

int main()
{

    int size;
    cout << "Enter size of the array : ";
    cin >> size;
    int arr[size];
    getArr(arr, size);
    printArr(arr, size);
    selectionSort(arr, size);
    printArr(arr, size, "sorted");

    return 0;
}