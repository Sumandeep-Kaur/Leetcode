class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '[')
                st.push(s[i]);
            
            if(st.empty())
                return 0;
            
            char x;
            switch (s[i]){
                case ')' : 
                    x = st.top();
                    st.pop();
                    if(x == '{' || x == '[')
                        return 0;
                    break;
                case '}' : 
                    x = st.top();
                    st.pop();
                    if(x == '(' || x == '[')
                        return 0;
                    break;
                case ']' : 
                    x = st.top();
                    st.pop();
                    if(x == '{' || x == '(')
                        return 0;
                    break;
            }
        }
        return (st.empty());
    }
};