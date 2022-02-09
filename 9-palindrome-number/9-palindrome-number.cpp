class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) 
            return false;
        
        vector<int> v;
        while(x) {
            int r = x % 10;
            x /= 10;
            v.push_back(r);
        }
        
        if(v.size() == 1)
            return true;
        
        int low = 0, high = v.size() - 1;
        while(low < high) {
            if(v[low++] != v[high--])
                return false;
        }
        return true;
    }
};