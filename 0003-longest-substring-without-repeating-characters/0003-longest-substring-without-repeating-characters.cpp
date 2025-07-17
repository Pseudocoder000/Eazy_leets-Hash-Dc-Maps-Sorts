class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> seen;
        int start = 0, maxLen = 0;

        for (int end = 0; end < s.length(); end++) {
            while (seen.count(s[end])) {
                seen.erase(s[start]);  // remove left character
                start++;               // shrink the window from the left
            }
            seen.insert(s[end]);       // add new character to set
            maxLen = max(maxLen, end - start + 1);  // update max
        }

        return maxLen;
    }
};
