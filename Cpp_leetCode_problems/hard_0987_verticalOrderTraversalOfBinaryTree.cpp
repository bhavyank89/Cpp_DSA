class Solution {
    public:
        vector<vector<int>> verticalTraversal(TreeNode* root) {
            vector<vector<int>> ans;
            if (!root) return ans;
    
            queue<pair<TreeNode*, pair<int, int>>> q;
            map<int, map<int, multiset<int>>> mpp; // {x: {y: {values}}}
    
            q.push({root, {0, 0}});
    
            while (!q.empty()) {
                auto temp = q.front();
                q.pop();
    
                TreeNode* node = temp.first;
                int x = temp.second.first;
                int y = temp.second.second;
    
                mpp[x][y].insert(node->val);
    
                if (node->left) q.push({node->left, {x - 1, y + 1}});
                if (node->right) q.push({node->right, {x + 1, y + 1}});
            }
    
            for (auto it : mpp) {
                vector<int> column;
                for (auto it2 : it.second) {
                    column.insert(column.end(), it2.second.begin(), it2.second.end());
                }
                ans.push_back(column);
            }
    
            return ans;
        }
    };