class Solution
{
public:
    string processStr(string s)
    {
        string result;

        for (char ch : s)
        {
            if (ch != '*' && ch != '#' && ch != '%')
            {
                result += ch;
            }
            else if (ch == '*' && !result.empty())
            {
                result.pop_back();
            }
            else if (ch == '#')
            {
                result += result;
            }
            else if (ch == '%')
            {
                reverse(result.begin(), result.end());
            }
        }

        return result;
    }
};
