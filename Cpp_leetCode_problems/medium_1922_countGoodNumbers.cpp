class Solution {
    public:
        const int MOD = 1e9 + 7;
    
        long long calPow(long long x, long long power) {
            long long ans = 1;
            x = x % MOD;
    
            while (power > 0) {
                if (power % 2 == 1) {
                    ans = (ans * x) % MOD;
                    power--;
                } else {
                    x = (x * x) % MOD;
                    power /= 2;
                }
            }
            return ans;
        }
    
        int countGoodNumbers(long long n) {
            long long even = (n + 1) / 2; // ceil(n/2)
            long long odd = n / 2;        // floor(n/2)
    
            long long result = (calPow(5, even) * calPow(4, odd)) % MOD;
            return (int)result;
        }
    };
    