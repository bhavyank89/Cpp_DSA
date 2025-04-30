class Solution {
    public:
        double myPow(double x, int n) {
            long long power = n;
            if (power < 0) {
                power = -power;
                x = 1 / x;
            }
    
            double ans = 1.0;
    
            while (power > 0) {
                if (power % 2 == 1) {
                    ans *= x;
                    power -= 1;
                } else {
                    x *= x;
                    power /= 2;
                }
            }
    
            return ans;
        }
    };
    