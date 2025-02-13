class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> ans;

        for (int i = 0; i < intervals.size(); i++) {
            int start = intervals[i][0];
            int end = intervals[i][1];

            if (!ans.empty() && start <= ans.back()[1]) {
                ans.back()[1] = max(ans.back()[1], end); // Fix: Update end value
            } else {
                ans.push_back({start, end});
            }
        }
        return ans;
    }
};
