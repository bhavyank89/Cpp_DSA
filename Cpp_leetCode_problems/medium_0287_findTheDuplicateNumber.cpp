class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        int slow = nums[0];
        int fast = nums[nums[0]];

        // Phase 1: Detect the intersection point in the cycle
        while (slow != fast)
        {
            slow = nums[slow];
            fast = nums[nums[fast]];
        }

        // Phase 2: Find the entrance to the cycle (duplicate)
        fast = 0;
        while (fast != slow)
        {
            fast = nums[fast];
            slow = nums[slow];
        }

        return fast;
    }
};
