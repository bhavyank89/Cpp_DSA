class Solution {
    public:
        int divide(int dividend, int divisor) {
            // Handle overflow case
            if (dividend == INT_MIN && divisor == -1) return INT_MAX;
            
            if (dividend == 0) return 0;
            if (divisor == 1) return dividend;
            if (divisor == -1) return -dividend;
    
            bool positive = (dividend > 0) == (divisor > 0);
    
            long long numerator = abs((long long)dividend);
            long long denominator = abs((long long)divisor);
    
            long long ans = 0;
            while (numerator >= denominator) {
                int count = 0;
                while (numerator >= (denominator << (count + 1))) {
                    count++;
                }
                ans += (1LL << count);
                numerator -= (denominator << count);
            }
    
            ans = positive ? ans : -ans;
    
            if (ans > INT_MAX) return INT_MAX;
            if (ans < INT_MIN) return INT_MIN;
    
            return (int)ans;
        }
    };
    