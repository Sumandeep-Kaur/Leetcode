class Solution {
public:
    string intToRoman(int num) {
        string V[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
        string X[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
        string C[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
        string M[] =  {"", "M", "MM", "MMM", "MMMM"};
        
        string str = M[num/1000] + C[num%1000/100] + X[num%100/10] + V[num%10];
        return str;
    }
};