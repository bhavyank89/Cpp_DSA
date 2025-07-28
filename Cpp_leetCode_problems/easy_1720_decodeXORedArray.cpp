class Solution
{
public:
    vector<int> decode(vector<int> &encoded, int first)
    {
        vector<int> ans;
        ans.push_back(first);
        int current = first;
        for (int i = 0; i < encoded.size(); i++)
        {
            current ^= encoded[i];
            ans.push_back(current);
        }
        return ans;
    }
};