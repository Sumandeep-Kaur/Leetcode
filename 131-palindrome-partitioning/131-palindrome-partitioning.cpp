class Solution {
public:
    bool palindrome(string str) {
        int start = 0, end = str.length() - 1;
        while(start < end) {
            if(str[start++] != str[end--])
                return false;
        }
        return true;
    }
    
    void findPartitions(string s, int index, vector<string>& v, vector<vector<string>>& ans) {
        if(index == s.length()) {
            ans.push_back(v);
            return;
        }
        for(int i = index; i < s.length(); i++) {
            if(palindrome(s.substr(index, i - index + 1))) {
                v.push_back(s.substr(index, i - index + 1));
                findPartitions(s, i + 1, v, ans);
                v.pop_back();
            }
        }    
    }
    
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> v;
        findPartitions(s, 0, v, ans);
        return ans;
    }
};