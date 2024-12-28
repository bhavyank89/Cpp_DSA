class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0; 
        for (int i = 0; i < nums.size(); i++) { 
            int sum = 0; // Initialize sum for the current starting index
            for (int j = i; j < nums.size(); j++) { 
                sum += nums[j]; // Accumulate sum for the subarray
                if (sum == k) // Check if the sum equals k
                    count++; 
            }
        }
        return count;
    }
};
