class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
        sort(arr.begin(), arr.end());
        
        int count = 0;
        for(int i = 0; i < arr.size(); i++) {
            int l = i + 1, h = arr.size() - 1;
            while(l < h) {
                if(arr[l] + arr[h] < target - arr[i])
                    l++;
                else if(arr[l] + arr[h] > target - arr[i])
                    h--;
                else { 
                    if(arr[l] != arr[h]) { 
                        int left = 1, right = 1;
                        while(l + 1 < h && arr[l] == arr[l + 1]) {
                            l++;
                            left++;
                        }
                        while(h - 1 > l && arr[h] == arr[h - 1]) {
                            h--;
                            right++;
                        }
                        count += left * right;
                        count %= 1000000007;
                        l++;
                        h--;
                    }
                    else {
                        count += (h - l + 1) * (h - l) / 2;
                        count %= 1000000007;
                        break;
                    }
                }
            }
        }
        return count;
    }
};