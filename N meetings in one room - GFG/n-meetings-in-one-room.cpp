/*
Time Complexity: O(N)
Space Complexity: O(N)

Approach:

Initialise vector of two quantities: the starting time, ending time. Sort this data structure in ascending order of end time. 
Initially, the answer is 1 because the first meeting can always be performed. Make another variable, say limit that keeps track of the ending time of the meeting that was last performed. 
Initially set limit as the end time of the first meeting.

Start iterating from the second meeting. At every position we have two possibilities:-
1. If the start time of a meeting is strictly greater than limit we can perform the meeting. Update the answer and limit as ending time of the current meeting. 
1. If the start time is less than or equal to limit skip and move ahead.
*/

#include <bits/stdc++.h>
using namespace std;

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
