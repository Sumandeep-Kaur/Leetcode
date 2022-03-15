class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int open = 0;
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == '(')
                open++;
            else if(s[i] == ')') {
                if(open == 0)
                    s[i] = '*';
                else
                    open--;
            }
        }
        
        open = 0;
        for(int i = s.length() - 1; i >= 0; i--) {
            if(s[i] == ')')
                open++;
            else if(s[i] == '(') {
                if(open == 0)
                    s[i] = '*';
                else
                    open--;
            }
        }
        
        string res = "";
        for(int i = 0; i < s.length(); i++) {
            if(s[i] != '*')
                res += s[i];
        }
        
        return res;
    }
};