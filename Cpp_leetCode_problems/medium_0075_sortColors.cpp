class Solution {
public:
    void sortColors(vector<int>& nums) {
        int size = nums.size();
        for (int i = 0; i < size; i++) {
            int minValue = nums[i];
            int minIndex = i;
            for (int j = i; j < size; j++) {
                if (nums[j] < minValue) {
                    minValue = nums[j];
                    minIndex = j;
                }
            }
            swap(nums[i], nums[minIndex]);
        }
    }
};
