class Solution {
    public:
        void recursiveFunction(vector<vector<int>>& ans, vector<int>& candidates, int n, int target, int index, int currentSum, vector<int> subset) {
            // base case
            if (index >= n || currentSum > target) {
                if (currentSum == target) {
                    ans.push_back(subset);
                }
                return;
            }
    
            // take the element at index (repetition allowed)
            subset.push_back(candidates[index]);
            recursiveFunction(ans, candidates, n, target, index, currentSum + candidates[index], subset);
    
            // don't take the element at index
            subset.pop_back();
            recursiveFunction(ans, candidates, n, target, index + 1, currentSum, subset);
        }
    
        vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
            int n = candidates.size();
            vector<vector<int>> ans;
            recursiveFunction(ans, candidates, n, target, 0, 0, {});
            return ans;
        }
    };
    