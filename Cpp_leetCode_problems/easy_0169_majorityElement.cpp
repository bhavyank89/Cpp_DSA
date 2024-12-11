class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> countMap;

        
        for (int i = 0; i < nums.size(); i++) {
            countMap[nums[i]]++;
        }

        int ans = -1;

        for (auto it : countMap) {
            if (it.second > nums.size() / 2) { 
                ans = it.first;              
                break;
            }
        }

        return ans;
    }
};
