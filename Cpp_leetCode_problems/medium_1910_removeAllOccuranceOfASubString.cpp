class Solution
{
public:
    string removeOccurrences(string s, string part)
    {
        int n = s.size();
        int m = part.size();
        while (s.find(part) < n)
        {
            s.erase(s.find(part), m);
        }
        return s;
    }
};