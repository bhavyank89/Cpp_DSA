class Solution {
    public:
        int sumSubarrayMins(vector<int>& arr) {
            int n = arr.size();
            vector<int> nseIndex(n, n);  // Next Smaller Element index (default `n`)
            vector<int> pseIndex(n, -1); // Previous Smaller Element index (default `-1`)
    
            // Finding Next Smaller Elements (NSE)
            stack<int> st1;
            for(int i=n-1; i>=0; i--) {
                while(!st1.empty() && arr[st1.top()] >= arr[i]) st1.pop();
                if(!st1.empty()) nseIndex[i] = st1.top();
                st1.push(i);
            }
    
            // Finding Previous Smaller Elements (PSE)
            stack<int> st2;
            for(int i=0; i<n; i++) {
                while(!st2.empty() && arr[st2.top()] > arr[i]) st2.pop();
                if(!st2.empty()) pseIndex[i] = st2.top();
                st2.push(i);
            }
    
            // Calculate sum of minimums
            int mod = 1e9 + 7;
            long long sum = 0;
            for(int i=0; i<n; i++) {
                long long left = i - pseIndex[i];
                long long right = nseIndex[i] - i;
                sum = (sum + (left * right % mod) * arr[i] % mod) % mod;
            }
    
            return (int)sum;
        }
    };
    