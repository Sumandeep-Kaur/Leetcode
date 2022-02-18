/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        queue<pair<TreeNode*, int>> q;
        map<int, vector<int>> mp;
        
        q.push({root, 0});
        while(!q.empty()) {
            vector<pair<int, int>> v;
            int n = q.size();
            for(int i = 0; i < n; i++) { 
                TreeNode* temp = q.front().first;
                int line = q.front().second;
                v.push_back({temp->val, line});
                q.pop();

                if(temp->left) 
                    q.push({temp->left, line - 1});
                if(temp->right)
                    q.push({temp->right, line + 1});
            }
            
            sort(v.begin(), v.end());
            for(auto it : v) 
                mp[it.second].push_back(it.first);
        }
        
        vector<vector<int>> ans;
        for(auto i : mp) {
            ans.push_back(i.second);
        }
        
        return ans;
    }
};