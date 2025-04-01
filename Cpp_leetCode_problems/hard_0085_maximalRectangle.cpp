#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

class Solution {
public:
    int calArea(vector<int>& heights) {
        stack<int> st;
        int n = heights.size();
        int maxArea = 0;

        for (int i = 0; i < n; i++) {
            while (!st.empty() && heights[st.top()] > heights[i]) {
                int element = heights[st.top()];
                st.pop();
                int nse = i;
                int pse = st.empty() ? -1 : st.top();
                maxArea = max(maxArea, element * (nse - pse - 1));
            }
            st.push(i);
        }

        while (!st.empty()) {
            int element = heights[st.top()];
            st.pop();
            int nse = n;
            int pse = st.empty() ? -1 : st.top();
            maxArea = max(maxArea, element * (nse - pse - 1));
        }

        return maxArea;
    }

    int maximalRectangle(vector<vector<char>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>> heights(n, vector<int>(m, 0));

        for (int j = 0; j < m; j++) {
            int sum = 0;
            for (int i = 0; i < n; i++) {
                if (matrix[i][j] == '0') sum = 0;
                else sum += (matrix[i][j] - '0');
                heights[i][j] = sum;
            }
        }

        int maxArea = 0;
        for (int i = 0; i < n; i++) {
            int area = calArea(heights[i]);
            maxArea = max(maxArea, area);  
        }

        return maxArea;
    }
};
