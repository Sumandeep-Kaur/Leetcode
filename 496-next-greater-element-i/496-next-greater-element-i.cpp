class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;
        vector<vector<int>> v;
        for(int i = nums2.size() - 1; i >= 0; i--) {
            if(st.empty()) { 
                v.push_back({nums2[i], -1});
            }
            else if(st.size() > 0 && st.top() >= nums2[i]) {
                v.push_back({nums2[i], st.top()});
            }
            else {
                while(st.size() > 0 && st.top() < nums2[i])
                    st.pop();
                if(st.empty()) 
                    v.push_back({nums2[i], -1});
                else 
                    v.push_back({nums2[i], st.top()});
            }
            st.push(nums2[i]);
        }
        
        vector<int> ans;
        for(int i = 0; i < nums1.size(); i++) {
            for(int j = 0; j < v.size(); j++) {
                if(v[j][0] == nums1[i]) { 
                    ans.push_back(v[j][1]);
                    break;
                }
            }
        }
        
        return ans;
    }
};