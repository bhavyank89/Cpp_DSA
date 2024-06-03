#include <bits/stdc++.h>
using namespace std;
//pls check TC and SC
void printArray(int arr[], int size, int index = 0)
{
    /*
        TimeComplexicity - O(n) --> n is the size of the array
        SpaceComplexicity - O(n)   --> n is the size of the array
    */
    if (index == size)
    {
        return;
    }
    cout << arr[index] << " ";
    printArray(arr, size, index + 1);
}
int sumArray(int arr[], int size, int sum = 0, int index = 0)
{
    /*
        TimeComplexicity - O(n) --> n is the size of the array
        SpaceComplexicity - O(n)   --> n is the size of the array
    */
    if (index == size)
    {
        return sum;
    }
    sumArray(arr, size, sum + arr[index], index + 1);
}
int maxArray(int arr[], int size, int maxValue = INT_MIN, int index = 0)
{
    /*
        TimeComplexicity - O(n) --> n is the size of the array
        SpaceComplexicity - O(n)   --> n is the size of the array
    */
    if (index == size)
    {
        return maxValue;
    }
    maxArray(arr,size,max(maxValue,arr[index]),index+1);
}
int minArray(int arr[],int size,int minValue=INT_MAX,int index=0){
    /*
        TimeComplexicity - O(n) --> n is the size of the array
        SpaceComplexicity - O(n)   --> n is the size of the array
    */
    if(index==size){
        return minValue;
    }
    minArray(arr,size,min(minValue,arr[index]),index+1);
}
void reverseArray(int arr[], int arrReverse[],int size,int index = 0){
    /*
        TimeComplexicity - O(n) --> n is the size of the array
        SpaceComplexicity - O(n)   --> n is the size of the array
    */
    if(index==size){
        return;
    }
    arrReverse[index] = arr[size-index-1];
    reverseArray(arr,arrReverse,size,index+1);
}
void reverseOriginalArray(int arr[],int size,int start=0,int end=0,int index=0){
    /*
        TimeComplexicity - O(n) --> n is the size of the array
        SpaceComplexicity - O(1)
    */
    end = size-start-1;
    if(end<=start){
        return;
    }
    swap(arr[start],arr[end]);
    reverseOriginalArray(arr,size,start+1,end,index+1);
}
void swapAlternative(int arr[],int size,int index1=0,int index2=1){
    if(index1>=size || index2>=size){
        return;
    }
    swap(arr[index1],arr[index2]);
    swapAlternative(arr,size,index1+2,index2+2);
}
int main()
{

    int n = 6;
    int arr[n] = {1, 12 ,45 ,-1,0,15};
    int arrReverse[n];

    // length of arr
    int size = sizeof(arr) / sizeof(int);

    printArray(arr, size);
    cout<<endl;
    reverseArray(arr,arrReverse,size);
    printArray(arrReverse,size);
    cout<<endl<<"sumArray : "<<sumArray(arr, size)<<endl;
    cout<<"maxArray : "<<maxArray(arr,size)<<endl;
    cout<<"minArray : "<<minArray(arr,size)<<endl;
    reverseOriginalArray(arr,size);
    printArray(arr,size);
    cout<<endl;
    swapAlternative(arr,size);
    printArray(arr,size);
    cout<<endl;

    return 0;
}