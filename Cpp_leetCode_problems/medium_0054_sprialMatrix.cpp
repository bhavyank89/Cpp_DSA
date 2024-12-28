class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int n = matrix.size();          // Number of rows
        int m = matrix[0].size();       // Number of columns
        int top = 0, bottom = n - 1;
        int left = 0, right = m - 1;

        while (top <= bottom && left <= right) {
            // Traverse from left to right along the top row
            for (int i = left; i <= right; i++) 
                ans.push_back(matrix[top][i]);
            top++;  // Move the top boundary down

            // Traverse from top to bottom along the right column
            for (int i = top; i <= bottom; i++) 
                ans.push_back(matrix[i][right]);
            right--;  // Move the right boundary left

            // Traverse from right to left along the bottom row
            if (top <= bottom) {  // Check to avoid double processing
                for (int i = right; i >= left; i--) 
                    ans.push_back(matrix[bottom][i]);
                bottom--;  // Move the bottom boundary up
            }

            // Traverse from bottom to top along the left column
            if (left <= right) {  // Check to avoid double processing
                for (int i = bottom; i >= top; i--) 
                    ans.push_back(matrix[i][left]);
                left++;  // Move the left boundary right
            }
        }
        return ans;
    }
};
