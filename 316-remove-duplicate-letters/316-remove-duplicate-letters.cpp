class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<int> count(26, 0);
        for(int i = 0; i < s.length(); i++)
            count[s[i] - 'a']++;
        
        string res = "";
        vector<bool> visited(26, false);
        for(int i = 0; i < s.length(); i++) {
            count[s[i] - 'a']--;
            if (visited[s[i] - 'a'] == true) 
                continue;
            while(s[i] < res.back() && count[res.back() - 'a'] > 0) {
                visited[res.back() - 'a'] = false;
                res.pop_back();
            }
            res += s[i];
            visited[s[i] - 'a'] = true;
        }
        return res;
    }
};