class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int breakpoint = -1;

        // Find the first decreasing element from the end
        for (int i = n - 2; i >= 0; i--) { 
            if (nums[i] < nums[i + 1]) {
                breakpoint = i;
                break;
            }
        }

        // If no breakpoint is found, reverse the array
        if (breakpoint == -1) {
            reverse(nums.begin(), nums.end());
            return;
        }

        // Find the smallest element larger than nums[breakpoint] from the right
        for (int i = n - 1; i > breakpoint; i--) { 
            if (nums[i] > nums[breakpoint]) {
                swap(nums[i], nums[breakpoint]);
                break;
            }
        }

        // Reverse the subarray after the breakpoint
        reverse(nums.begin() + breakpoint + 1, nums.end());
    }
};
