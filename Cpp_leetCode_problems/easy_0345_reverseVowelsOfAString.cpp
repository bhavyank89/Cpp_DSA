class Solution
{
public:
    string reverseVowels(string s)
    {
        int startVowel = 0;
        int endVowel = s.size() - 1;
        set<char> st = {'a', 'A', 'e', 'E', 'i', 'I', 'o', 'O', 'u', 'U'};

        while (startVowel < endVowel)
        {
            while (startVowel < endVowel && st.find(s[startVowel]) == st.end())
                startVowel++;
            while (startVowel < endVowel && st.find(s[endVowel]) == st.end())
                endVowel--;
            swap(s[startVowel], s[endVowel]);
            startVowel++;
            endVowel--;
        }
        return s;
    }
};
