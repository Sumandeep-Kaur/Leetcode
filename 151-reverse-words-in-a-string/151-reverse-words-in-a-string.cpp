class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        string word = "";
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == ' ') {
                if(word.length() >= 1) { 
                    st.push(word);
                    word = "";
                }
                while(s[i+1] == ' ')
                    i++;
            }
            else if(i == s.length() - 1) {
                word += s[i];
                st.push(word);
            }
            else
                word += s[i];
        }
        
        string ans = "";
        while(st.size() != 1) {
            ans += st.top() + " ";
            st.pop();
        }
        ans += st.top();
        
        return ans;
    }
};