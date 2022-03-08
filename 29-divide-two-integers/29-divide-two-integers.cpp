class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1) 
            return INT_MAX;
        
        unsigned int a = abs(dividend);
        unsigned int b = abs(divisor);
        unsigned int quotient = 0;
        
        // iterate over each possible factors from 1 to 2^31
        for (int x = 31; x >= 0; x--) {
            // Is it possible to reduce "a" up to a >> x such that a >> x is still grater than b ?
            if ((a >> x) >= b) {
                a -= (b << x); // adjust the dividend, substract the maximum possible multiple of b and 1 << x
                quotient += (1 << x); //update the quotient
            }
        }
        
        if((dividend > 0 && divisor > 0) || (dividend < 0 && divisor < 0))
            return quotient;
        return -quotient;
    }
};