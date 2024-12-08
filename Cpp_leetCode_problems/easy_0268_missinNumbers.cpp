class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        sort(nums.begin(), nums.end()); // Sort the array

        // Check for the missing number
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != i)
            {
                return i; // Return the missing number
            }
        }

        // If no number is missing in the range, the missing number is `n`
        return nums.size();
    }
};
