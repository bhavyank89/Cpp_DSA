#include<bits/stdc++.h>
using namespace std;

int linearSearch(int arr[],int size,int element){

    for(int i = 0 ; i<size ; i++){
        if(element == arr[i]){
            return i;
        }
    }
    return -1;

}

int main(){
    int arr[10]={12,-9,19,34,-15,10,2,8,-5,-76};
    int element;
    cout<<endl<<"Enter the element : ";
    cin>>element;

    int size = sizeof(arr)/sizeof(int);

    int sresult = linearSearch(arr,size,element);
    
    if(sresult == -1){
        cout<<endl<<"Element is not present";
    }
    else{
        cout<<endl<<"Element is not  at index of : "<<sresult;
    }
    
}