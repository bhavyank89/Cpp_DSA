class Solution
{
public:
    int missingInteger(vector<int> &nums)
    {
        int preSum = nums[0];
        set<int> st;

        for (int i = 0; i < nums.size(); i++)
        {
            st.insert(nums[i]); // corrected
        }

        // Calculate prefix sum of initial consecutive increasing sequence
        for (int i = 1; i < nums.size(); i++)
        {
            if ((nums[i] - nums[i - 1]) == 1)
                preSum += nums[i];
            else
                break;
        }

        // Find the smallest integer >= preSum that is not in nums
        while (st.find(preSum) != st.end())
        {
            preSum++;
        }

        return preSum;
    }
};
