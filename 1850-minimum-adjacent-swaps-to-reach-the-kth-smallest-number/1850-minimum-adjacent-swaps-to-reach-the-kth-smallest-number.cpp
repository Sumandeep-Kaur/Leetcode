class Solution {
public:
    int getMinSwaps(string num, int k) {
        string kthperm = num;
        while(k--) 
            next_permutation(kthperm.begin(), kthperm.end());
        
        int swapCount = 0;
        for(int i = 0; i < num.length(); i++) {
            if(num[i] != kthperm[i]) {
                int j = i + 1;
                while(num[j] != kthperm[i])
                    j++;
                for( ; j > i; j--) {
                    swap(num[j], num[j - 1]);
                    swapCount++;
                }
            }
        }
        
        return swapCount;
    }
};