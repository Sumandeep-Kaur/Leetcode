class Solution {
public:
    int countPairs(vector<int>& deliciousness) {
        long long ans = 0;
        unordered_map<int, int> mp;
        for(int num : deliciousness) {
            int power = 1;
            for(int i = 0; i < 22; i++) {
                int target = power - num;
                if(mp[target] > 0)
                    ans += mp[target];
                power *= 2;
            }
            mp[num]++;
        }
        
        return ans % (int)(1e9 + 7);
    }
};