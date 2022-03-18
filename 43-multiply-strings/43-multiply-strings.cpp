class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1 == "0" || num2 == "0")
            return "0";
        
        vector<int> temp(num1.length() + num2.length(), 0);
        
        for(int i = num1.length() - 1; i >= 0; i--) {
            for(int j = num2.length() - 1; j >= 0; j--) {
                temp[i + j + 1] += (num1[i] - '0') * (num2[j] - '0');
                temp[i + j] += temp[i + j + 1] / 10;
                temp[i + j + 1] %= 10;
            }
        }
        
        int i = 0;
        string ans = "";
        while(temp[i] == 0) { i++; }
        while(i < temp.size()) { ans += temp[i++] + '0'; }
        
        return ans;
    }
};