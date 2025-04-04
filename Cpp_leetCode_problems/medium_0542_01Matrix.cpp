class Solution {
    public:
        vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
            int n = mat.size();
            int m = mat[0].size();
    
            vector<vector<int>> visited(n, vector<int>(m, 0));
            vector<vector<int>> distance(n, vector<int>(m, 0));
            queue<pair<pair<int, int>, int>> q;
    
            // Step 1: Push all '0' cells into the queue and mark as visited
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    if (mat[i][j] == 0) {
                        q.push({{i, j}, 0});
                        visited[i][j] = 1;
                    }
                }
            }
    
            // Step 2: BFS traversal
            int drow[4] = {-1, 0, +1, 0};
            int dcol[4] = {0, +1, 0, -1};
    
            while (!q.empty()) {
                int row = q.front().first.first;
                int col = q.front().first.second;
                int step = q.front().second;
                q.pop(); // Pop the processed element
    
                distance[row][col] = step;
    
                for (int i = 0; i < 4; i++) {
                    int nrow = row + drow[i];
                    int ncol = col + dcol[i];
    
                    // Check valid bounds and unvisited cells
                    if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && visited[nrow][ncol] == 0) {
                        q.push({{nrow, ncol}, step + 1});
                        visited[nrow][ncol] = 1;
                    }
                }
            }
    
            return distance;
        }
    };