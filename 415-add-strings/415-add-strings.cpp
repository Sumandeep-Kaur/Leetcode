class Solution {
public:
    string addStrings(string num1, string num2) {
        int i = num1.length() - 1, j = num2.length() - 1, carry = 0;
        string res = "";
        
        while((i >= 0 || j >= 0) || carry == 1) {
            int sum = 0;
            if(i >= 0) 
                sum += num1[i--] - '0';
            if(j >= 0)
                sum += num2[j--] - '0';
            if(carry == 1)
                sum += carry;
            
            carry = sum / 10;
            sum %= 10;
            res = to_string(sum) + res;
        }
        
        return res;
    }
};