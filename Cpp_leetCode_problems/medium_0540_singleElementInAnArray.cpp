class Solution {
    public:
        int singleNonDuplicate(vector<int>& nums) {
            int n = nums.size();
            if(n==1) return nums[0]; // nums containing single element
            if(nums[0]!=nums[1]) return nums[0]; // index 0 case
            if(nums[n-1]!=nums[n-2]) return nums[n-1]; // index n-1 case
    
            int low = 0;
            int high = n - 1;
            int ans = -1;
    
            while(low<=high){
                int mid = low + (high - low)/2;
    
                if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1])
                return nums[mid];
    
                // ignore left half (even,odd)
                if((mid%2==1 && nums[mid]==nums[mid-1])||(mid%2==0 && nums[mid]==nums[mid+1]))
                low = mid +1;
                else
                high = mid - 1;
            }
            return -1;
        }
    };