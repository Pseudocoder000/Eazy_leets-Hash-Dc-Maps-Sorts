class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(),s.end(),s.begin(), ::tolower);
        string result = "";
        for(int i=0; i<s.length(); i++){
            if ((s[i] >= 'a' && s[i]<= 'z') || (s[i] >= '0' && s[i]<= '9')){
                result += s[i];
            }
        }
        int i =0, j=result.length()-1;
        while(i<=j){
            if(result[i]==result[j]){
                i++; j--;
            } else { 
                return false;
            }
        }
        return true;

    }
};