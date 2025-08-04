class Solution
{
public:
    long long minOperations(vector<int> &nums1, vector<int> &nums2, int k)
    {
        long long inc_oper = 0;
        long long dsc_oper = 0;

        for (int i = 0; i < nums1.size(); i++)
        {
            long long diff = nums1[i] - nums2[i];

            if (k == 0)
            {
                if (diff != 0)
                    return -1;
            }
            else
            {
                if (abs(diff) % k != 0)
                    return -1;

                if (diff > 0)
                    inc_oper += diff;
                else if (diff < 0)
                    dsc_oper -= diff; // add the positive value
            }
        }

        if (inc_oper != dsc_oper)
            return -1;

        return k == 0 ? 0 : inc_oper / k;
    }
};
