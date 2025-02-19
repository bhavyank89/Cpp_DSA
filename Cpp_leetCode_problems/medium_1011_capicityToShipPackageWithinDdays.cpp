class Solution {
    public:
        int findDays(vector<int>& weights, int capacity) {
            int day = 1;
            int load = 0;
            for (int i = 0; i < weights.size(); i++) {
                if (load + weights[i] > capacity) {
                    day++;
                    load = weights[i];
                } else {
                    load += weights[i];
                }
            }
            return day;
        }
    
        int shipWithinDays(vector<int>& weights, int days) {
            int low = weights[0]; // Minimum ship capacity required
            int high = 0;         // Maximum ship capacity required
    
            int n = weights.size();
            for (int i = 0; i < n; i++) {
                low = max(low, weights[i]); // Maximum single package weight
                high += weights[i];         // Total weight of all packages
            }
    
            int ans = -1;
            while (low <= high) {
                int mid = low + (high - low) / 2; // Current ship capacity
                int calDays = findDays(weights, mid);
                if (calDays <= days) {
                    ans = mid;
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            }
            return ans;
        }
    };
    