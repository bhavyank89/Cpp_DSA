class Solution
{
public:
    int minOperations(int n)
    {
        int target = n;
        int ans = 0;
        for (int i = 0; i < (n / 2); i++)
        {
            int num = (2 * i) + 1;
            ans += abs(num - n);
        }
        return ans;
    }
};