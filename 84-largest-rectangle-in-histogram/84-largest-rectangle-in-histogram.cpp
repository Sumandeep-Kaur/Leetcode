class Solution {
public:
    vector<int> nextSmallerToLeft(vector<int>& heights) {
        vector<int> v;
        stack<pair<int, int>> st;
        for(int i = 0; i < heights.size(); i++) {
            if(st.size() == 0)
                v.push_back(-1);
            else if(st.size() > 0 && st.top().first < heights[i])
                v.push_back(st.top().second);
            else if(st.size() > 0 && st.top().first >= heights[i]) {
                while(st.size() > 0 && st.top().first >= heights[i])
                    st.pop();
                if(st.size() == 0)
                    v.push_back(-1);
                else
                    v.push_back(st.top().second);
            }
            st.push({heights[i], i});
        }
        return v;
    }
    
    vector<int> nextSmallerToRight(vector<int>& heights) {
        vector<int> v;
        stack<pair<int, int>> st;
        for(int i = heights.size() - 1; i >= 0; i--) {
            if(st.size() == 0)
                v.push_back(heights.size());
            else if(st.size() > 0 && st.top().first < heights[i])
                v.push_back(st.top().second);
            else if(st.size() > 0 && st.top().first >= heights[i]) {
                while(st.size() > 0 && st.top().first >= heights[i])
                    st.pop();
                if(st.size() == 0)
                    v.push_back(heights.size());
                else
                    v.push_back(st.top().second);
            }
            st.push({heights[i], i});
        }
        reverse(v.begin(), v.end());
        return v;
    }
    
    int largestRectangleArea(vector<int>& heights) {
        vector<int> left = nextSmallerToLeft(heights);
        vector<int> right = nextSmallerToRight(heights);
        
        int area = 0;
        for(int i = 0; i < heights.size(); i++) { 
            area = max(area, heights[i] * (right[i] - left[i] - 1));
        }
        
        return area;
    }
};