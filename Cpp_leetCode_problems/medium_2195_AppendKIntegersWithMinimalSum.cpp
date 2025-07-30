class Solution
{
public:
    long long minimalKSum(vector<int> &nums, int k)
    {
        // Use a set to remove duplicates and sort the elements
        set<int> st(nums.begin(), nums.end());

        long long ans = (long long)k * (k + 1) / 2;

        for (int num : st)
        {
            if (num <= k)
            {
                ans -= num; // Remove overlap
                ans += ++k; // Add next available number beyond current range
            }
            else
            {
                break; // No more overlap possible
            }
        }

        return ans;
    }
};
