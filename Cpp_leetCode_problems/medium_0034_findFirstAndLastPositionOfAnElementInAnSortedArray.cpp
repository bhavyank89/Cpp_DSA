class Solution {
    public:
        int lowerBound(vector<int> &arr, int target) {
            int start = 0;
            int end = arr.size() - 1;
            int ans = -1;
    
            while (start <= end) {
                int mid = start + (end - start) / 2;
                if (arr[mid] >= target) { // Fix: Compare arr[mid] with target instead of mid
                    ans = mid;
                    end = mid - 1;
                } else {
                    start = mid + 1;
                }
            }
            return ans;
        }
    
        int upperBound(vector<int> &arr, int target) {
            int start = 0;
            int end = arr.size() - 1;
            int ans = arr.size();
    
            while (start <= end) {
                int mid = start + (end - start) / 2;
                if (arr[mid] > target) { // Fix: Compare arr[mid] with target instead of mid
                    ans = mid;
                    end = mid - 1;
                } else {
                    start = mid + 1;
                }
            }
            return ans;
        }
    
        vector<int> searchRange(vector<int>& nums, int target) {
            int lb = lowerBound(nums, target);
            int ub = upperBound(nums, target) - 1; // Fix: upperBound gives the first greater element index
    
            if (lb < nums.size() && nums[lb] == target) {
                return {lb, ub}; // Fix: Return the correct range if target exists
            }
            return {-1, -1}; // Fix: Return {-1, -1} if target is not found
        }
    };
    