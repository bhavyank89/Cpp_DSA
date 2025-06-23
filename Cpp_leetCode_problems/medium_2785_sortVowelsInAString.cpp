class Solution {
public:
    string sortVowels(string s) {
        vector<int> index;
        vector<char> vowels;
        set<char> vowel = {'a','A','e','E','i','I','o','O','u','U'};
        for(int i=0;i<s.size();i++){
            if(vowel.find(s[i])!= vowel.end()){
            vowels.push_back(s[i]);
            index.push_back(i);
            }
        }
        sort(vowels.begin(),vowels.end());
        for(int i=0;i<index.size();i++){
            s[index[i]] = vowels[i];
        }
        return s;
    }
};