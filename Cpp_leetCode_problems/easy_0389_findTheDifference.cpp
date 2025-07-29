class Solution
{
public:
    char findTheDifference(string s, string t)
    {
        int arr[26] = {0};

        for (char c : s)
        {
            arr[c - 'a']++;
        }

        for (char c : t)
        {
            arr[c - 'a']--;
            if (arr[c - 'a'] < 0)
            {
                return c;
            }
        }

        return ' ';
    }
};
