class Solution {
public:
    int maxScore(string s) {
        int no0 = 0;
        int score = INT_MIN;
        for (int i = 0; i < s.size() - 1; i++) { // Partition point must leave at least one character for right part
            if (s[i] == '0') 
                no0 += 1;
            int no1 = 0;
            for (int j = i + 1; j < s.size(); j++) {
                if (s[j] == '1') 
                    no1++;
            }
            score = max(score, no0 + no1);
        }
        return score;
    }
};
