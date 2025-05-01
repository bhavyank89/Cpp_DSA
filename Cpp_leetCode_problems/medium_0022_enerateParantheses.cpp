class Solution {
    public:
        void recursive_Function(vector<string>& ans, int n, int open, int close, string current_str) {
            if (open == close && open == n) {
                ans.push_back(current_str);
                return;
            }
            if (open < n) recursive_Function(ans, n, open + 1, close, current_str + '(');
            if (close < open) recursive_Function(ans, n, open, close + 1, current_str + ')');
        }
    
        vector<string> generateParenthesis(int n) {
            vector<string> ans;
            recursive_Function(ans, n, 0, 0, "");
            return ans;
        }
    };
    