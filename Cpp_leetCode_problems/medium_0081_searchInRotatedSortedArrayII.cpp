class Solution {
    public:
        bool search(vector<int>& nums, int target) {
            int low = 0;
            int high = nums.size() - 1;
            
            while(low<=high){
                int mid = low + (high - low)/2;
                if(nums[mid] == target) return true;
    
                // check for the dupicated condiition
                // srink the search space if duplicates found
                if(nums[low]==nums[mid] && nums[mid]==nums[high]){
                    low++;
                    high--;
                    continue;
                }
    
                // in srinked search space, find sorted part of the array
                // array left sorted
                if(nums[low]<=nums[mid]){
                    // target in sorted part
                    if(nums[low]<=target && target<nums[mid])
                    high = mid - 1;
                    // target in unsorted part
                    else
                    low = mid + 1;
                }
                // array right sorted
                else{
                    // target in sorted part
                    if(nums[mid]<target && target<=nums[high])
                    low = mid + 1;
                    // target in unsorted part
                    else
                    high = mid - 1;
                }
            }
            return false;
        }
    };