class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int n = s.length(); // Length of the input string
        unordered_set<char> unique_letters; // To store all unique characters in the string

        // Step 1: Collect all unique letters in the string
        for (char &ch : s) {
            unique_letters.insert(ch);
        }

        int result = 0; // To store the count of distinct palindromic subsequences

        // Step 2: Iterate over each unique letter
        for (char letter : unique_letters) {
            int first_idx = -1; // First occurrence index of the current letter
            int last_idx = -1;  // Last occurrence index of the current letter

            // Find the first and last occurrence of the current letter in the string
            for (int i = 0; i < n; i++) {
                if (s[i] == letter) {
                    if (first_idx == -1) {
                        first_idx = i; // Set the first index
                    }
                    last_idx = i; // Update the last index
                }
            }

            // If the letter appears at least twice, process the middle substring
            unordered_set<char> st; // To store unique middle characters
            for (int middle = first_idx + 1; middle <= last_idx - 1; middle++) {
                st.insert(s[middle]); // Collect all unique characters between first and last occurrence
            }

            // Add the count of unique middle characters to the result
            result += st.size();
        }

        return result; // Return the total count of distinct palindromic subsequences
    }
};