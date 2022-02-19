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
    int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode*, int>> q;
        int width = 0;
        
        q.push({root, 0});
        while(!q.empty()) {
            int n = q.size();
            int curmin = q.front().second;
            int left, right;
            
            for(int i = 0; i < n; i++) {
                TreeNode* temp = q.front().first;
                long k = q.front().second - curmin;
                q.pop();
                
                if(temp->left)
                    q.push({temp->left, k*2 + 1});
                if(temp->right)
                    q.push({temp->right, k*2 + 2});
                
                if(i == 0)
                    left = k;
                if(i == n - 1)
                    right = k;
            }
            
            width = max(width, right - left + 1);
        }
        
        return width;
    }
};