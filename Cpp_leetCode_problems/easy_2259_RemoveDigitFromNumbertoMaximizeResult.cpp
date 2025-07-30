class Solution
{
public:
    string removeDigit(string number, char digit)
    {
        string maxResult = "";
        for (int i = 0; i < number.size(); ++i)
        {
            if (number[i] == digit)
            {
                string temp = number;
                temp.erase(i, 1);                 // Try removing this occurrence
                maxResult = max(maxResult, temp); // Keep track of best option
            }
        }
        return maxResult;
    }
};
