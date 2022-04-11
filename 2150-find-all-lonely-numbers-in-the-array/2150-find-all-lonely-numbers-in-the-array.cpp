class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        map<int, int> mp;
        for(int num : nums) {
            mp[num]++;
        }
        
        vector<int> lonely;
        for(auto i : mp) {
            int num = i.first, freq = i.second;
            if(freq == 1 && mp.count(num - 1) == 0 && mp.count(num + 1) == 0)
                lonely.push_back(num);
        }
        
        return lonely;
    }
};