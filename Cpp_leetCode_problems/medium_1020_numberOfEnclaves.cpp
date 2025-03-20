class Solution {
    public:
        int numEnclaves(vector<vector<int>>& grid) {
            int n = grid.size();
            int m = grid[0].size();
    
            vector<vector<int>> visited(n, vector<int>(m, 0));
            queue<pair<int, int>> q;
    
            // Mark boundary-connected land cells
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    if (grid[i][j] == 1 && (i == 0 || i == n - 1 || j == 0 || j == m - 1)) {
                        q.push({i, j});
                        visited[i][j] = 1; 
                    }
                }
            }
    
            // Direction vectors for 4 possible moves (Up, Right, Down, Left)
            int drow[] = {-1, 0, +1, 0};
            int dcol[] = {0, +1, 0, -1};
    
            // Perform BFS from boundary '1' cells
            while (!q.empty()) {
                int row = q.front().first;
                int col = q.front().second;
                q.pop();
    
                for (int i = 0; i < 4; i++) {
                    int nrow = row + drow[i];
                    int ncol = col + dcol[i];
    
                    // If valid and unvisited land cell, mark it and push to queue
                    if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m &&
                        visited[nrow][ncol] == 0 && grid[nrow][ncol] == 1) {
                        q.push({nrow, ncol});
                        visited[nrow][ncol] = 1; 
                    }
                }
            }
    
            // Count the number of enclaves (unreachable land cells)
            int count = 0;
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    if (visited[i][j] == 0 && grid[i][j] == 1) 
                        count++;
                }
            }
            return count;
        }
    };
    