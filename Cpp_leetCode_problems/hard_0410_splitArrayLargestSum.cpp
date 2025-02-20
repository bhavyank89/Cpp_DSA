#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int checkPainters(vector<int>& nums, int mid) {
        int countPainter = 1;  // Start with 1 painter
        int areaAllocated = 0;  // Track area assigned to current painter

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] + areaAllocated <= mid) {
                areaAllocated += nums[i];
            } else {  
                countPainter++;  // Assign new painter
                areaAllocated = nums[i];  
            }
        }
        return countPainter;
    }

    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(), nums.end());  // Min possible max sum (largest element)
        int high = accumulate(nums.begin(), nums.end(), 0);  // Sum of all elements
        int ans = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            int calPainters = checkPainters(nums, mid);

            if (calPainters <= k) {  // If possible with `k` or fewer painters
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
};
