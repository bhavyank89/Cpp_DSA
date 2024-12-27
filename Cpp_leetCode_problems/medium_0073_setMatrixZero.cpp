class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        // Use vectors for dynamic size initialization
        vector<int> markRow(m, 0);
        vector<int> markColoumn(n, 0);

        // First pass to mark rows and columns that need to be zeroed
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == 0) {
                    markRow[i] = 1;
                    markColoumn[j] = 1;
                }
            }
        }

        // Second pass to set the matrix cells to zero
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (markRow[i] || markColoumn[j]) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};
