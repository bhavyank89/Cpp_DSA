class Solution
{
public:
    long long makeSimilar(vector<int> &nums, vector<int> &target)
    {
        vector<int> odd_nums, even_nums, odd_target, even_target;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] % 2 == 0)
                even_nums.push_back(nums[i]);
            else
                odd_nums.push_back(nums[i]);

            if (target[i] % 2 == 0)
                even_target.push_back(target[i]);
            else
                odd_target.push_back(target[i]);
        }

        sort(odd_nums.begin(), odd_nums.end());
        sort(odd_target.begin(), odd_target.end());
        sort(even_nums.begin(), even_nums.end());
        sort(even_target.begin(), even_target.end());

        long long operation = 0;

        for (int i = 0; i < odd_nums.size(); i++)
        {
            operation += abs(odd_nums[i] - odd_target[i]) / 2;
        }

        for (int i = 0; i < even_nums.size(); i++)
        {
            operation += abs(even_nums[i] - even_target[i]) / 2;
        }

        // Since each operation adjusts two elements simultaneously, divide total by 2
        return operation / 2;
    }
};
