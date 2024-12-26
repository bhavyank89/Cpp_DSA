class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int size = nums.size();
        if(size==1)
        return nums[0];
        int maxSum = INT_MIN;
        int sum = 0;
        for(int i=0;i<size;i++){
            sum+=nums[i];
            maxSum = max(maxSum,sum);
            if(sum<0) sum=0;
        }
        return maxSum;
    }
};