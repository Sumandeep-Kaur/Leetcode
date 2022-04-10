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
    int sumNumbers(TreeNode* root) {
        int sum = 0;
        queue<pair<TreeNode*, int>> q;
        q.push({root, 0});
        while(!q.empty()) {
            TreeNode* node = q.front().first;
            int curSum = q.front().second;
            q.pop();
            
            curSum = curSum * 10 + node->val;
            if(node->left == NULL && node->right == NULL)
                sum += curSum;
            if(node->left != NULL)
                q.push({node->left, curSum});
            if(node->right != NULL)
                q.push({node->right, curSum});
        }
        
        return sum;
    }
};