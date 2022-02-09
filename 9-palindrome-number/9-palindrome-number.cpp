class Solution {
public:
    bool isPalindrome(int x) {
        if(num < 0 || (num % 10 == 0 && num != 0))
            return false;
        
        int reversed = 0;
        while(num > reversed) {
            int rem = num % 10;
            reversed = reversed * 10 + rem;
            num /= 10;
        }
        
        return (num == reversed || num == reversed/10);
    }
};
