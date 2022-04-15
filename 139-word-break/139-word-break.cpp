class Solution {
public:
    bool wordBreak(string s, vector<string>& dict) {
        vector<bool> dp (s.size() + 1, false);
        dp[0] = true;
        
        for (int i = 1; i <= s.length(); i++) { 
            for (int j = i - 1; j >= 0; j--) { 
                if (dp[j] == true && find(dict.begin(), dict.end(), s.substr(j, i-j)) != dict.end()) {
                    dp[i] = true;
                    break;
                }
            }
        }
        
        return dp[s.length()];
    }
};