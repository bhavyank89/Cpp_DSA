class Solution {
    public:
        int findMin(vector<int>& nums) {
            int low = 0;
            int high = nums.size() - 1;
            int ans = INT_MAX;
    
            while (low <= high) {
                int mid = low + (high - low) / 2;
    
                // If array is already sorted, return the first element
                if (nums[low] <= nums[high]) {
                    ans = min(ans, nums[low]);
                    break;
                }
    
                // Left sorted array
                if (nums[low] <= nums[mid]) {
                    ans = min(ans, nums[low]); 
                    low = mid + 1;
                }
                // Right sorted array
                else {
                    ans = min(ans, nums[mid]); 
                    high = mid - 1;
                }
            }
            return ans;
        }
    };
    