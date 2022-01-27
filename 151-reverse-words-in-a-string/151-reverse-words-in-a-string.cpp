class Solution {
public:
    string reverseWords(string s) {
        int left = 0, right = s.length() - 1;
        string temp = "", ans = "";
        
        while(left <= right) {
            char ch = s[left];
            if(ch != ' ')
                temp += ch;
            else {
                if(temp != "") { 
                    if(ans == "")
                        ans = temp;
                    else
                        ans = temp + " " + ans;
                }
                temp = "";
            }
            left++;
        }
        if(temp != "") {
            if(ans == "")
                ans = temp;
            else
                ans = temp + " " + ans;
        }
        return ans;
    }
};