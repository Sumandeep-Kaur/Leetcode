class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        if(stones.size() == 1)
            return stones[0];
        
        sort(stones.begin(), stones.end());
        while(stones.size() > 0) {
            int x = stones[stones.size() - 2], y = stones[stones.size() - 1];
            stones.pop_back();
            stones.pop_back();
            if(x != y) {  
                stones.push_back(y - x);
                sort(stones.begin(), stones.end());
            }
            if(stones.size() == 1)
                return stones[0];
        }
        return 0;
    }
};