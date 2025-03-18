class Solution {
    public:
        void BFS(int node, vector<int>& visitedList, vector<vector<int>>& adjList) {
            queue<int> q;
            q.push(node);
            visitedList[node] = 1;
    
            while (!q.empty()) {
                int curr = q.front();
                q.pop();
    
                for (auto neighbor : adjList[curr]) {
                    if (!visitedList[neighbor]) {
                        visitedList[neighbor] = 1;
                        q.push(neighbor);
                    }
                }
            }
        }
    
        int findCircleNum(vector<vector<int>>& isConnected) {
            int n = isConnected.size();
    
            // Convert adjacency matrix to adjacency list
            vector<vector<int>> adjList(n);
    
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    if (isConnected[i][j] == 1 && i != j) {
                        adjList[i].push_back(j);
                        adjList[j].push_back(i);
                    }
                }
            }
    
            // Traversing each node
            vector<int> visitedList(n, 0); 
            int count = 0;
    
            for (int i = 0; i < n; i++) {
                if (!visitedList[i]) {
                    count++;
                    BFS(i, visitedList, adjList);
                }
            }
            return count;
        }
    };
    