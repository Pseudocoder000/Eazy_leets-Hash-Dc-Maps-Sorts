class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLen = 0;

        for (int i = 0; i < s.length(); i++) {
            unordered_set<char> seen;
            int len = 0;

            for (int j = i; j < s.length(); j++) {
                char c = s[j];
                if (seen.count(c)) {
                    break; // Duplicate found, stop here
                } else {
                    seen.insert(c);
                    len++;
                }
            }

            // Keep track of the maximum length found so far
            if (len > maxLen) {
                maxLen = len;
            }
        }

        return maxLen;
    }
};
