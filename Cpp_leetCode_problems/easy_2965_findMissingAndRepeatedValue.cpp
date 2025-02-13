class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        long long n = grid.size();
        long long SN = (n * n * (n * n + 1)) / 2;
        long long S2N = (n * n * (n * n + 1) * (2 * n * n + 1)) / 6;
        long long val1 = 0;
        long long val2 = 0;
        vector<int> arr;

        int top = 0, bottom = n - 1, left = 0, right = n - 1;
        
        while (left <= right && top <= bottom) { // Fix: Correct condition
            for (int i = left; i <= right; i++) {
                arr.push_back(grid[top][i]);
            }
            top++;
            
            for (int i = top; i <= bottom; i++) {
                arr.push_back(grid[i][right]);
            }
            right--;
            
            if (top <= bottom) {
                for (int i = right; i >= left; i--) {
                    arr.push_back(grid[bottom][i]);
                }
                bottom--;
            }
            
            if (left <= right) {
                for (int i = bottom; i >= top; i--) {
                    arr.push_back(grid[i][left]);
                }
                left++;
            }
        }
        
        for (int i = 0; i < arr.size(); i++) {
            val1 += arr[i];  // Fix: Accumulate sum
            val2 += (long long)arr[i] * (long long)arr[i];  // Fix: Accumulate sum of squares
        }

        long long x = ((val1 - SN) + (val2 - S2N) / (val1 - SN)) / 2;
        long long y = x - (val1 - SN);

        return {(int)x, (int)y};
    }
};
