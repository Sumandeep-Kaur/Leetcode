class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int k = needle.size();
        string str = ".";
        
        if(k == 0)
            return 0;
        if(n < k)
            return -1;
        
        int i = 0, j = 0;
        while(j < n) {
            if(j - i + 1 < k) { 
                str += haystack[j];
                j++;
            }
            else if(j - i + 1 == k) {
                str.erase(str.begin() + 0);
                str += haystack[j];
                if(str == needle)
                    return i;
                i++; j++;
            }
        }
        return -1;
    }
};