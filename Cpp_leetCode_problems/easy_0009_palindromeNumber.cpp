class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        return false;
        else{
            int num=x,revNum=0;
            while(num!=0 and revNum<INT_MAX/10){
                revNum=revNum*10+num%10;
                num=num/10;
            }
            return revNum==x;
        }
    }
};