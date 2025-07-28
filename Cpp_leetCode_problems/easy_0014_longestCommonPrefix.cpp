class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        // brute force will be taking the shortest word for the array and checking for every character in the word for the rest of the array by looping on it
        // optimal -> sort and check on first and last word only
        sort(strs.begin(), strs.end());
        string first = strs[0];
        string second = strs[strs.size() - 1];
        string ans = "";
        for (int i = 0; i < first.size(); i++)
        {
            if (first[i] != second[i])
                break;
            ans += first[i];
        }
        return ans;
    }
};