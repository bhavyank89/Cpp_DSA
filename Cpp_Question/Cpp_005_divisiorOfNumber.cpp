#include <bits/stdc++.h>
using namespace std;

void printDivisior1(int n){
    /*  Approach-1
        TimeComplexicity - O(n)
        SpaceComplexicity - O(1)
        Prints in shorted formate
    */
    for(int i=1;i<=n;i++){
        if(n%i==0)
        cout<<i<<"  ";
    }
    cout<<endl;
}
void printDivisior2(int n){
    /*
        Approach-2
        TimeComplexicity - O(sqrt(n))
        SpaceComplexicity - O(1)
        prints in unsoreted order
        To short store each factors in vector and the short them
    */
   for(int i=1;i<=sqrt(n);i++){ 
    if(i==n/i && n%i==0)
    cout<<i<<"  ";
    else if(n%i==0)
    cout<<i<<"  "<<n/i<<"   ";
   }
   cout<<endl;
}
void printVector(vector<int> v){

    //printing a vector
    for(vector<int>::iterator it = v.begin(); it!=v.end();it++)
    cout<<*(it)<<"  ";
    cout<<endl;
    /*
        Shorter syntex of printing a vector

        for(auto it : v)
        cout<<it<<" ";

    */
}
void printDivisior3(int n,vector<int> divisior){
    /*
        Approach-2(modified)
        TimeComplexicity - O(sqrt(n))
        SpaceComplexicity - O(m) where m are the number of factors
        prints in soreted order
    */
   for(int i=1;i<=sqrt(n);i++){
    if (n % i == 0) {
            if (n / i == i)
                divisior.push_back(i);
            else{
                divisior.push_back(i);
                divisior.push_back(n/i);
            }
        }
   }
    sort(divisior.begin(),divisior.end());  //sorting a vector
    printVector(divisior);                  //printing vector
    cout<<endl;
}

int main()
{
    int n =36;
    vector<int> divisior;
    printDivisior1(n);
    printDivisior2(n);
    printDivisior3(n,divisior);

    return 0;
}