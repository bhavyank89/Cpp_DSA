class Solution {
    public:
        bool isBipartite(vector<vector<int>>& graph) {
            int n = graph.size();
            vector<int> color(n, -1);  // Initialize all nodes as uncolored (-1)
    
            for (int i = 0; i < n; i++) {
                if (color[i] == -1) {  // Start BFS for unvisited components
                    queue<int> q;
                    q.push(i);
                    color[i] = 0;
    
                    while (!q.empty()) {
                        int node = q.front();
                        q.pop();
    
                        for (auto it : graph[node]) {
                            if (color[it] == -1) { 
                                color[it] = 1 - color[node];  // Assign opposite color
                                q.push(it);
                            } else if (color[it] == color[node]) {
                                return false;  // Same color found -> Not bipartite
                            }
                        }
                    }
                }
            }
            return true;
        }
    };
    