class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int size = nums.size();
        if(k>size){
            k=k%size;
        }
        reverse(nums.begin(),nums.begin()-k+size);
        reverse(nums.begin() + size - k, nums.end());
        reverse(nums.begin(),nums.end());
    }
};