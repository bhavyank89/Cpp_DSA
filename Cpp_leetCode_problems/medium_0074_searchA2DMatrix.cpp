class Solution {
    public:
        bool searchMatrix(vector<vector<int>>& matrix, int target) {
            int n = matrix.size();
            int m = matrix[0].size();
            int low = 0, high = n * m - 1;
    
            while (low <= high) {
                int mid = low + (high - low) / 2;
                int rowNo = mid / m;  // Corrected row index calculation
                int colNo = mid % m;  // Corrected column index calculation
    
                if (matrix[rowNo][colNo] == target)
                    return true;
                else if (matrix[rowNo][colNo] < target)
                    low = mid + 1;  // Search in the right half
                else
                    high = mid - 1; // Search in the left half
            }
            return false;
        }
    };
    