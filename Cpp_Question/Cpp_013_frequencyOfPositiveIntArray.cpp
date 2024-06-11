#include<bits/stdc++.h>
using namespace std;

int main() {
    // Array containing only positive integers
    int arr[] = {0, 1, 3, 4, 1, 2, 3};
    int freqNum = 412; // Number whose frequency we want to find
    int size = sizeof(arr) / sizeof(int);

    // Pre-computation using hash array
    const int MAX_VAL = 100000; // Maximum possible value in arr[]
    int hashArray[MAX_VAL] = {0}; // Initialize hash array to zero

    for (int i = 0; i < size; i++) {
        hashArray[arr[i]] += 1;
    }

    // Fetching the frequency of freqNum
    cout << "Frequency of " << freqNum << " is: " << hashArray[freqNum] << endl;

    return 0;
}