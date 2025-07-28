class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());

        int n = nums.size();
        for (int i = 0; i < n; i += 3)
        {
            // If this is the last element or it doesn't match the next one
            if (i + 1 >= n || nums[i] != nums[i + 1])
            {
                return nums[i];
            }
        }

        // Just in case (though shouldn't reach here in valid input)
        return -1;
    }
};
