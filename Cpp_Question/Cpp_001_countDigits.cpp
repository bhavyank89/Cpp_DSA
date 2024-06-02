#include <bits/stdc++.h>
using namespace std;
int intLength(int n){
    //Approach-2
    /*
        TimeComplexicity - O(n)
        SpaceComplexicity - O(1)
    */
    int count=0;
    do{
        n=n/10;
        count++;
    }while(n!=0);
    return count;
}

int main()
{
    int n = 123321;
    /*Approach 1
    The time complexity of this code is O(log n). 
    This is because the to_string() function converts the integer 
    to a string representation, which takes O(log n) time complexity 
    as it involves iterating through the digits of the number.

    The space complexity of this code is O(log n) as well. 
    This is because the string representation of the integer n 
    will have the same number of digits as the original integer, 
    so the space required to store the string will be proportional 
    to the number of digits in the integer.
    */
    /*
        Approach-3
        TimeComplexicity - O(1)
        SpaceComplexicity - O(1)
    */
    string stringN = to_string(n);
    cout << "length of string : " << stringN.length() << endl;  //Approach-1(convert to string and count it's length)
    cout << "length of string : " << intLength(n) << endl;  //Approach-2(linear counting)
    cout << "length of string : " << int(log10(n)+1) << endl;  //Approach-3(Best Approach)


    return 0;
}