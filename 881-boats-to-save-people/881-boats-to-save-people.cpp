class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        
        int pairs = 0, i = 0, j = people.size() - 1;
        while(i < j) {
            if(people[i] + people[j] <= limit) {
                pairs++;
                i++;
                j--;
            }
            else 
                j--;
        }
        
        return people.size() - pairs;
    }
};