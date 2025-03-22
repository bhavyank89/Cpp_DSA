class Solution {
    public:
        int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
            queue<pair<string, int>> q;
            q.push({beginWord, 1}); 
    
            unordered_set<string> st(wordList.begin(), wordList.end()); 
    
            if (st.find(endWord) == st.end()) return 0; 
            st.erase(beginWord);
    
            while (!q.empty()) {
                string word = q.front().first;
                int level = q.front().second;
                q.pop();
    
                if (word == endWord) return level;  
    
                for (int i = 0; i < word.size(); i++) {
                    char original = word[i];  
                    for (char ch = 'a'; ch <= 'z'; ch++) {
                        if (ch == original) continue;  // Skip the same character
                        word[i] = ch;
                        if (st.find(word) != st.end()) {  // If transformed word exists in the set
                            q.push({word, level + 1});
                            st.erase(word);  // Remove from set to prevent revisiting
                        }
                    }
                    word[i] = original;  
                }
            }
            return 0;
        }
    };
    