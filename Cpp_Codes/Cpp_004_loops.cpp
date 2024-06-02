#include <bits/stdc++.h>
using namespace std;
/*
    Time Complexicity - O(n^2)
    Space Complexicity - O(1)
*/
void printFirstN(int n)
{
    int i = 1;
    while (i <= n)
    {
        cout << i << "  ";
        i++;
    }
    cout << endl;
}

void printEvenTillN(int n){
    for(int i=2;i<=n;i+=2)
    cout<<i<<"  ";
    cout<<endl;
}
void printOddTillN(int n){
    for(int i=1;i<=n;i+=2)
    cout<<i<<"  ";
    cout<<endl;
}
void printPrimeTillN(int n){
    /*
        1 is not a prime number. 
        The number 1 has only 1 factor. 
        For a number to be classified as a prime number, 
        it should have exactly two factors.
    */
    for(int i=2;i<=n;i++){
        int prime = true;
        for(int j=2;j<i;j++){
            if(i%j==0){
                prime=false;
            }
        }
        if(prime)
        cout<<i<<"  ";
    }
    cout<<endl;
}
int sumFirstN(int n){
    int sum=0;
    for(int i=1;i<=n;i++)
    sum+=i;
    return sum;
}
int sumEvenTillN(int n){
    int sum=0;
    for(int i=2;i<=n;i+=2)
    sum+=i;
    return sum;
}
int sumOddTillN(int n){
    int sum=0;
    for(int i=1;i<=n;i+=2)
    sum+=i;
    return sum;
}

int main()
{
    int n = 13;

    //printing first n natural numbers
    printFirstN(n);
    //printing even number less than equal to n
    printEvenTillN(n);
    //printing odd number less than equal to n
    printOddTillN(n);
    //printing prime till n
    printPrimeTillN(n);
    
    //Sum of first n natural numbers
    cout<<"SumFirstN : "<<sumFirstN(n)<<endl;
    //Sum of even number less than or equal to n
    cout<<"SumEvenTillN : "<<sumEvenTillN(n)<<endl;
    //Sum of odd number less than or equal to n
    cout<<"SumOvenTillN : "<<sumOddTillN(n)<<endl;

    return 0;
}