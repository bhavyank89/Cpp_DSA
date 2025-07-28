class Solution
{
public:
    int firstMissingPositive(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int ans = 1;
        int index = 0;
        bool found = false;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == ans)
            {
                found = true;
                index = i;
            }
        }
        if (!found)
            return ans;
        while (index < nums.size())
        {
            if (ans == nums[index])
                index++;
            else if (ans + 1 == nums[index])
                ans++;
            else
                break;
        }
        return ans + 1;
    }
};