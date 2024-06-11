#include<bits/stdc++.h>
using namespace std;

void integerArrayHashing(){
    
    int arr[] = {0,1,3,4,1,2,3};
    int freqNum = 4;
    int size = sizeof(arr)/sizeof(int);

    //precomputation
    int hashArray[100000]={0};
    for(int i=0;i<size;i++){
        hashArray[arr[i]]+=1;
    }

    //fetching
    cout<<"freqNum : "<<hashArray[freqNum]<<endl;
    
}
void characterArrayHashing(){
    //ASCII value of a-z (97-122)
    //ASCII value of A-Z (65-90)
    string str = "sdasfsdSsd";
    int searchChar = 'S';

    //precomputation
    int hashArray[128]={0};
    for(int i=0;i<str.length();i++){
        hashArray[str[i]]+=1;
    }
    
    //fetching
    cout<<hashArray[searchChar]<<endl;
}
void integerMapHashing(){
    int arr[]={1,12,0,3,4,1,3};
    int size = sizeof(arr)/sizeof(int);
    int freqNum = 3;

    //preComputation
    map<int,int> hashMap;
    for(int i=0;i<size;i++){
        hashMap[arr[i]]+=1;
    }

    //fetching
    cout<<hashMap[freqNum]<<endl;
}
int main(){
    // integerArrayHashing();
    // characterArrayHashing();
    integerMapHashing();

    return 0;
}