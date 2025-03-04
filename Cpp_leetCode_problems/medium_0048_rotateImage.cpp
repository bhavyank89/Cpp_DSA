    class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int m = matrix.size();  // row size

        // Transpose of the matrix
        for (int i = 0; i < m; i++) {
            for (int j = i + 1; j < m; j++) {  // Start from i+1 to avoid swapping back
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        // Reverse each row
        for (int i = 0; i < m; i++) {
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};