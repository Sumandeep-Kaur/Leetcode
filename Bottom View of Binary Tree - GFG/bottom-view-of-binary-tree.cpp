class Solution {
  public:
    vector <int> bottomView(Node *root) {
        queue<pair<Node*, int>> q;
        map<int, int> mp;
        q.push({root, 0});
        while(!q.empty()) {
            Node* temp = q.front().first;
            int t = q.front().second;
            q.pop();
            mp[t] = temp->data;
            if(temp->left)
                q.push({temp->left, t - 1});
            if(temp->right)
                q.push({temp->right, t + 1});
            
        }
        
        vector<int> bottom;
        for(auto i : mp) {
            bottom.push_back(i.second);
        }
        
        return bottom;
    }
};
