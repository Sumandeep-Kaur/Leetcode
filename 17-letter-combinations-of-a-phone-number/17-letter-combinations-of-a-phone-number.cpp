class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if(digits == "")
            return {};
        
        vector<string> map = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        
        vector<string> result;
        result.push_back("");
        
        for(auto digit: digits) {
            vector<string> temp;
            for(auto curChar: map[digit - '0']) {
                for(auto str: result) {
                    temp.push_back(str + curChar);
                }
            }
            swap(result, temp);
        }
        return result;
    }
};