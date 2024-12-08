class Solution {
public:
    int addDigits(int num) {
        while(num>=10){      //Checking if num is a single digit
            int ans = 0;
            while(num!=0){
                ans += num%10;
                num /= 10;
            }
            num = ans;
        }
        return num;     //if single digit than return
    }
};