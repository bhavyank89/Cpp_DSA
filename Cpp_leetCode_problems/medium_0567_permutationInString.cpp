class Solution
{
public:
    bool isSameFreq(int freq[], int freqWind[])
    {
        for (int i = 0; i < 26; i++)
        {
            if (freq[i] != freqWind[i])
                return false;
        }
        return true;
    }

    bool checkInclusion(string s1, string s2)
    {
        int freq[26] = {0};
        for (int i = 0; i < s1.length(); i++)
            freq[s1[i] - 'a']++;

        int windowSize = s1.length();
        int s2Len = s2.length();

        if (windowSize > s2Len)
            return false;

        for (int i = 0; i <= s2Len - windowSize; i++)
        {
            int freqWind[26] = {0};
            for (int j = 0; j < windowSize; j++)
            {
                freqWind[s2[i + j] - 'a']++;
            }
            if (isSameFreq(freq, freqWind))
                return true;
        }

        return false;
    }
};
