#include<bits/stdc++.h>
using namespace std;
//Calculate no of set bits in binary form of a decimal number
int noOfSetBits(int n){
    int count=0;
    while(n!=0){
        if(n&1){
            count++;
        }
        n=n>>1;
    }
    return count;
}
int main(){
    int n=7;
    cout<<"noOfSetBits : "<<noOfSetBits(n)<<endl;
}