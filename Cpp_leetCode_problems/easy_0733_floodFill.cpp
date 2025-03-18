class Solution {
    public:
        vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
            int n = image.size();
            int m = image[0].size();
            
            // If the starting pixel is already the target color, return the original image
            if (image[sr][sc] == color) return image;
    
            vector<vector<int>> visited(n, vector<int>(m, 0));
            queue<pair<int, int>> q;
            int originalColor = image[sr][sc];
    
            q.push({sr, sc});
            visited[sr][sc] = 1;
            image[sr][sc] = color; // Change the starting pixel color
    
            int drow[] = {-1, 0, +1, 0};
            int dcol[] = {0, +1, 0, -1};
    
            while (!q.empty()) {
                int r = q.front().first;
                int c = q.front().second;
                q.pop();
    
                for (int i = 0; i < 4; i++) {
                    int nrow = r + drow[i];
                    int ncol = c + dcol[i];
    
                    // Check if the new pixel is within bounds, unvisited, and has the original color
                    if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m &&
                        !visited[nrow][ncol] && image[nrow][ncol] == originalColor) {
                        
                        visited[nrow][ncol] = 1;
                        image[nrow][ncol] = color; // Change color
                        q.push({nrow, ncol});
                    }
                }
            }
            return image;
        }
    };
    