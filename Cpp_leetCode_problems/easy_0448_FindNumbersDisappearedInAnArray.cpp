class Solution
{
public:
    vector<int> findDisappearedNumbers(vector<int> &nums)
    {
        vector<int> ans;
        int n = nums.size();
        vector<int> vec(n + 1, 0);
        for (int i = 0; i < nums.size(); i++)
        {
            vec[nums[i]]++;
        }
        for (int i = 1; i <= n; i++)
        {
            if (vec[i] == 0)
                ans.push_back(i);
        }
        return ans;
    }
};