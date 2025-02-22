class Solution {
    public:
        int findMaxEl(vector<vector<int>>& mat, int mid) {
            int maxValue = INT_MIN;
            int row = -1;
            for (int i = 0; i < mat.size(); i++) {
                if (mat[i][mid] > maxValue) {
                    maxValue = mat[i][mid];
                    row = i;
                }
            }
            return row;
        }
    
        vector<int> findPeakGrid(vector<vector<int>>& mat) {
            int n = mat.size();
            int m = mat[0].size();  // Corrected: Get number of columns
            int low = 0, high = m - 1;
    
            while (low <= high) {
                int mid = low + (high - low) / 2;
                int row = findMaxEl(mat, mid);
    
                int left = (mid - 1 >= 0) ? mat[row][mid - 1] : -1;
                int right = (mid + 1 < m) ? mat[row][mid + 1] : -1;
    
                if (mat[row][mid] > left && mat[row][mid] > right)
                    return {row, mid};
                else if (mat[row][mid] < left)
                    high = mid - 1;
                else
                    low = mid + 1;
            }
            return {-1, -1};  // If no peak is found (which shouldn't happen in a valid peak problem)
        }
    };
    