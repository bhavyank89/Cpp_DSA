class Solution
{
public:
    vector<int> findErrorNums(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> arr(n + 1, 0); // Use vector for dynamic array
        for (int i = 0; i < n; i++)
        {
            arr[nums[i]]++;
        }

        vector<int> ans;
        for (int i = 1; i <= n; i++)
        { // Check from 1 to n inclusive
            if (arr[i] == 2 || arr[i] == 0)
            {
                ans.push_back(i);
            }
        }

        // Make sure duplicate is first, missing is second
        if (arr[ans[0]] == 0)
            swap(ans[0], ans[1]);

        return ans;
    }
};
