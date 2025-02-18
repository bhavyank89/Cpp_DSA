class Solution {
    public:
        int search(vector<int>& nums, int target) {
            int low = 0;
            int high = nums.size() - 1;
            
            while (low <= high) {
                int mid = low + (high - low) / 2;
    
                // Return if target found
                if (nums[mid] == target)
                    return mid;
    
                // Check which side is sorted
                if (nums[low] <= nums[mid]) { // Left side is sorted
                    if (nums[low] <= target && target < nums[mid]) // Target in sorted part
                        high = mid - 1;
                    else // Target in unsorted part
                        low = mid + 1;
                } else { // Right side is sorted
                    if (nums[mid] < target && target <= nums[high]) // Target in sorted part
                        low = mid + 1;
                    else // Target in unsorted part
                        high = mid - 1;
                }
            }
            return -1;
        }
    };
    