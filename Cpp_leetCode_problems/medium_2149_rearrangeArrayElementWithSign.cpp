class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int size = nums.size(); // Declare 'size' as an integer, not globally.
        queue<int> qpos;       // Queue to store positive numbers.
        queue<int> qneg;       // Queue to store negative numbers.
        vector<int> ans;       // Resultant vector.

        // Separate positive and negative numbers into respective queues.
        for (int i = 0; i < size; i++) {
            if (nums[i] < 0)
                qneg.push(nums[i]);
            else
                qpos.push(nums[i]);
        }

        // Alternate between positive and negative while constructing the result.
        while (!qpos.empty() && !qneg.empty()) {
            ans.push_back(qpos.front());
            ans.push_back(qneg.front());
            qpos.pop();
            qneg.pop();
        }

        // Return the rearranged array.
        return ans;
    }
};
