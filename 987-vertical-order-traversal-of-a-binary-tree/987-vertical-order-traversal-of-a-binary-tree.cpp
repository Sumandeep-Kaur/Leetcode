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
        queue<pair<TreeNode*, pair<int, int>>> q;
        map<int, map<int, multiset<int>>> mp;
        
        q.push({root, {0, 0}});
        while(!q.empty()) {
            TreeNode* temp = q.front().first;
            int line = q.front().second.first;
            int level = q.front().second.second;
            mp[line][level].insert(temp->val);
            q.pop();
            
            if(temp->left) 
                q.push({temp->left, {line - 1, level + 1}});
            if(temp->right)
                q.push({temp->right, {line + 1, level + 1}});
        }
        
        vector<vector<int>> ans;
        for(auto i : mp) {
            vector<int> v;
            for(auto j : i.second) {
                v.insert(v.end(), j.second.begin(), j.second.end());
            }
            ans.push_back(v);
        }
        
        return ans;
    }
};