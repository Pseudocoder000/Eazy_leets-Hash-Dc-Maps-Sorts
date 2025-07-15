class Solution {
public:
    string processStr(string s) {
        string result = "";

        for (char ch : s) {
            if (islower(ch)) {
                result.push_back(ch);
            }
            else if (ch == '*') {
                if (!result.empty()) {
                    result.pop_back();
                }
            }
            else if (ch == '#') {
                result += result;
            }
            else if (ch == '%') {
                reverse(result.begin(), result.end());
            }
        }

        return result;
    }
};
