class Solution {
    public:
        void recursiveFunction(vector<vector<int>>& ans,vector<int>& nums,int length,int target,int k,int index,int currentSum,vector<int> subset){
            if(index>=length || subset.size()>=k){
                if(currentSum == target && subset.size()==k){
                    ans.push_back(subset);
                }
                return;
            }
    
            // taking that index
            subset.push_back(nums[index]);
            recursiveFunction(ans,nums,length,target,k,index+1,currentSum + nums[index],subset);
    
            // not taking that index
            subset.pop_back();
            recursiveFunction(ans,nums,length,target,k,index+1,currentSum,subset);
        }
        vector<vector<int>> combinationSum3(int k, int n) {
            vector<int> nums = {1,2,3,4,5,6,7,8,9};
            int l = nums.size();
            vector<vector<int>> ans;
            recursiveFunction(ans,nums,l,n,k,0,0,{});
            return ans;
        }
    };