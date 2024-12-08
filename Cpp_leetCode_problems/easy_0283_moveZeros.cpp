class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int size = nums.size();
        int countZeros = 0;
        vector<int> newArr;
        for(int i=0;i<size;i++){
            if(nums[i]==0){
                countZeros++;
            }
            else{
                newArr.push_back(nums[i]);
            }
        }
        for(int i=0;i<countZeros;i++){
            newArr.push_back(0);
        }
        nums.swap(newArr);
    }
};