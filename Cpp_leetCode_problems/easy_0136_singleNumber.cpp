class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int size = nums.size();
        if (size == 1)
            return nums[0];

        sort(nums.begin(), nums.end());
        for (int i = 0; i < size;)
        {
            if (nums[i + 1] == nums[i])
            {
                i += 2;
            }
            else
            {
                return nums[i];
            }
        }
        return nums[0];
    }
};