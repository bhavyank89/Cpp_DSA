class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        int start = 0;
        int pointer = 0;
        
        while (start < n) {
            while (pointer < n && s[pointer] != ' ') pointer++;
            
            reverse(s.begin() + start, s.begin() + pointer);
            
            start = pointer + 1;
            pointer = start;
        }

        return s;
    }
};
