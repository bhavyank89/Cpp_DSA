class Solution
{
public:
    vector<int> singleNumber(vector<int> &nums)
    {
        vector<int> ans;
        sort(nums.begin(), nums.end());
        int index = 0;
        int n = nums.size();

        while (index < n)
        {
            // If the next element is equal, skip the pair
            if (index + 1 < n && nums[index] == nums[index + 1])
            {
                index += 2;
            }
            else
            {
                // It's a unique number
                ans.push_back(nums[index]);
                index++;
            }
        }
        return ans;
    }
};
