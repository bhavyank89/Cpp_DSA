#include <vector>
using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        
        int n = height.size();
        vector<int> prefixMax(n,0);
        vector<int> suffixMax(n,0);
        
        prefixMax[0] = height[0];
        suffixMax[n-1] = height[n-1];

        for(int i=1;i<n;i++)
        prefixMax[i] = max(prefixMax[i-1],height[i]);

        for(int i=n-2;i>=0;i--)
        suffixMax[i] = max(suffixMax[i+1],height[i]);

        int count = 0;
        for(int i = 0; i < height.size(); i++) {
            count += min(prefixMax[i], suffixMax[i]) - height[i];
        }
        return count;
    }
};
