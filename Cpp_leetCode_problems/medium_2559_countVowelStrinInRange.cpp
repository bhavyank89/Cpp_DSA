
class Solution {
public:
    bool check(char c) {
        // Function to check if a character is a vowel
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            return true;
        return false;
    }

    vector<int> vowelStrings(vector<string>& words,
                             vector<vector<int>>& queries) {
        vector<int>
            v; // Prefix sum array to store cumulative counts of valid words
        v.push_back(0); // Initialize with 0 for easier calculations

        // Calculate prefix sums
        for (int i = 0; i < words.size(); i++) {
            if (check(words[i][0]) && check(words[i].back())) {
                v.push_back(
                    v.back() +
                    1); // Add 1 if the word starts and ends with a vowel
            } else {
                v.push_back(v.back()); // Else, keep the previous count
            }
        }

        vector<int> ans; // To store the results for each query

        // Process each query
        for (int i = 0; i < queries.size(); i++) {
            int startIndex = queries[i][0];
            int endIndex = queries[i][1];
            ans.push_back(v[endIndex + 1] - v[startIndex]);
        }

        return ans;

        // brute force approach
//     vector<int> ans;
//     char vowel[] = {'a', 'e', 'i', 'o', 'u'};

//     // Mark words that start and end with vowels
//     for (int i = 0; i < words.size(); i++) {
//         int wordLength = words[i].size();
//         char index0 = words[i][0]; // First character
//         char indexm = words[i][wordLength - 1]; // Last character

//         auto ptr1 = find(vowel, vowel + 5, index0);
//         auto ptr2 = find(vowel, vowel + 5, indexm);

//         int index1 = ptr1 - vowel;
//         int index2 = ptr2 - vowel;

//         if (index1 < 5 && index2 < 5) {
//             words[i] = "1"; // Mark as a valid word
//         } else {
//             words[i] = "0"; // Mark as invalid
//         }
//     }

//     // Process queries
//     for (int i = 0; i < queries.size(); i++) {
//         int startIndex = queries[i][0];
//         int endIndex = queries[i][1];
//         int count = 0;

//         for (int j = startIndex; j <= endIndex; j++) {
//             if (words[j] == "1") {
//                 count++;
//             }
//         }

//         ans.push_back(count);
//     }

//     return ans;
    }
};