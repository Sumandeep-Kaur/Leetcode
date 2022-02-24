class Solution {
public:
    int myAtoi(string s) {
        int sign = 1;
        int i = 0;
        while(i < s.length() && s[i] == ' ') { 
            i++;
        }
        
        if(i < s.length() && s[i] == '-') {
            sign = -1;
            i++;
        }
        else if(i < s.length() && s[i] == '+') {
            i++;
        }
        
        int ans  = 0;
        for(; i < s.length(); i++) {
            if(s[i] >= '0' && s[i] <= '9') {
                if(ans > INT_MAX/10 || (ans == INT_MAX/10 && (s[i] - '0') > INT_MAX % 10)) {
                    if(sign == 1) 
                        return INT_MAX;
                    else
                        return INT_MIN;
                }
                ans = ans * 10 + (s[i] - '0');
            }
            else { 
                break;
            }
        }
        
        return sign * ans;
    }
};