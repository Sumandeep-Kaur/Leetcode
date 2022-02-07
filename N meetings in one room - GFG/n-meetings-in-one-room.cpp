// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

#include<vector>

class Solution {
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        vector<vector<int>> v;
        for(int i = 0; i < n; i++) {
            vector<int> temp;
            temp.push_back(end[i]);
            temp.push_back(start[i]);
            v.push_back(temp);
        }
        
        sort(v.begin(), v.end());
        
        int count = 1, limit = v[0][0];
        for(int i = 1; i < v.size(); i++) {
            if(v[i][1] > limit) {
                count++;
                limit = v[i][0];
            }
        }
        
        return count;
    }
};
// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}  // } Driver Code Ends