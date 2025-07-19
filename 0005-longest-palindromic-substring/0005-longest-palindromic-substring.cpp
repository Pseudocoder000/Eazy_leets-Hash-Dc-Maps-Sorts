class Solution {
public:
    string longestPalindrome(string s) {
        if (s.empty()) return "";

        int start = 0, maxLen = 1;

        for (int i = 0; i < s.size(); i++) {
            expand(s, i, i, start, maxLen);     // odd length
            expand(s, i, i + 1, start, maxLen); // even length
        }

        return s.substr(start, maxLen);
    }

    void expand(string& s, int left, int right, int& start, int& maxLen) {
        while (left >= 0 && right < s.size() && s[left] == s[right]) {
            int len = right - left + 1;
            if (len > maxLen) {
                maxLen = len;
                start = left;
            }
            left--;
            right++;
        }
    }
};
