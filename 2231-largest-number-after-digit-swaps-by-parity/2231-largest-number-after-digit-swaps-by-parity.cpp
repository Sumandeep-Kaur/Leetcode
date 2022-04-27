class Solution {
public:
    int largestInteger(int num) {
        priority_queue<int> even, odd;
        
        string nums = to_string(num);
        while(num > 0) {
            int rem = num % 10;
            num /= 10;
            if(rem % 2 == 0)
                even.push(rem);
            else
                odd.push(rem);
        }
        
        int ans = 0;
        for(int i = 0; i < nums.length(); i++) {
            ans *= 10;
            if((nums[i] - '0') % 2 == 0) {
                ans += even.top();
                even.pop();
            }
            else {
                ans += odd.top();
                odd.pop();
            }
        }
        
        return ans;
    }
}; 