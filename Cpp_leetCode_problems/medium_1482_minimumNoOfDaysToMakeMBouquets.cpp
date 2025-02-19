class Solution {
    public:
        bool checkDay(vector<int>& arr, int day, int m, int k) {
            int count = 0;
            int totalBloom = 0;
    
            for (int i = 0; i < arr.size(); i++) {
                if (arr[i] <= day) { // If the flower blooms on or before 'day'
                    count++;
                    if (count == k) { 
                        totalBloom++;
                        count = 0;
                    }
                } else {
                    count = 0;
                }
            }
            return totalBloom >= m; // We need at least `m` bouquets
        }
    
        int minDays(vector<int>& bloomDay, int m, int k) {
            int n = bloomDay.size();
            if (m  > n/k) return -1; // Impossible case
            
            int low = *min_element(bloomDay.begin(), bloomDay.end());
            int high = *max_element(bloomDay.begin(), bloomDay.end());
            int ans = -1;
    
            while (low <= high) {
                int mid = low + (high - low) / 2;
                if (checkDay(bloomDay, mid, m, k)) {
                    ans = mid;
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            }
            return ans;
        }
    };
    