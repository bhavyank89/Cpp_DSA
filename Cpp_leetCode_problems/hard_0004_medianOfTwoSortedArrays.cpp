class Solution {
    public:
        double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
            int m = nums1.size();
            int n = nums2.size();
            vector<int> newNum(m + n);
            
            // Merge both arrays
            merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), newNum.begin());
    
            int total = m + n;
            int mid = total / 2;
    
            // If even number of elements, take average of two middle elements
            if (total % 2 == 0) 
                return (newNum[mid] + newNum[mid - 1]) / 2.0;
            else 
                return newNum[mid];
        }
    };
    