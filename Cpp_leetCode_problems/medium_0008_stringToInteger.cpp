class Solution {
    public:
        int myAtoi(string s) {
            int i = 0, n = s.size();
            bool negative = false;
    
            // Skip leading whitespaces
            while (i < n && s[i] == ' ') i++;
    
            // Check for optional sign
            if (i < n && (s[i] == '-' || s[i] == '+')) {
                negative = s[i] == '-';
                i++;
            }
    
            long ans = 0;
    
            // Parse digits
            while (i < n && isdigit(s[i])) {
                ans = ans * 10 + (s[i] - '0');
    
                // Handle overflow
                if (!negative && ans > INT_MAX) return INT_MAX;
                if (negative && -ans < INT_MIN) return INT_MIN;
    
                i++;
            }
    
            return negative ? -ans : ans;
        }
    };
    