class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> newArr;
        newArr.push_back(nums[0]);
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i+1]!=nums[i])
            newArr.push_back(nums[i+1]);
        }
        int k = newArr.size();
        nums.swap(newArr);
        return k;
    }
};