class Solution {
public:
    bool isPalindrome(string s, int start, int end) {
        while(start < end) {
            if(s[start++] != s[end--])
                return false;
        }
        return true;
    }
    
    bool validPalindrome(string s) {
        int start = 0, end = s.length() - 1;
        while(start < end) {
            if(s[start] != s[end])
                return isPalindrome(s, start, end - 1) || isPalindrome(s, start + 1, end);
            start++;
            end--;
        }
        return true;
    }
};