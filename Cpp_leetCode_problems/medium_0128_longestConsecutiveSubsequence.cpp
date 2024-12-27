class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0; // Handle edge case for empty array

        sort(nums.begin(), nums.end()); // Sort the input array

        int longest = 1; // Initialize longest sequence length
        int last_smallest = nums[0];
        int count = 1; // Initialize count to 1

        for (int i = 1; i < nums.size(); i++) {
            int element = nums[i];
            if (element == last_smallest + 1) { // Check if it's consecutive
                count++;
                last_smallest = element;
            } else if (element != last_smallest) { // Reset if it's not a duplicate
                count = 1;
                last_smallest = element;
            }
            longest = max(longest, count); // Update the longest sequence
        }
        return longest;
    }
};
