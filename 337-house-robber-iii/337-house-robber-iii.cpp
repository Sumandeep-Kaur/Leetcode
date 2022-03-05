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
    int robHouse(TreeNode* root, unordered_map<TreeNode*, int>& mp) {
        if(root == NULL)
            return 0;
        
        if(mp[root] != 0)
            return mp[root];
        
        int lootWithRoot = 0;
        if(root->left != NULL) 
            lootWithRoot += robHouse(root->left->left, mp) + robHouse(root->left->right, mp);
        
        if(root->right != NULL)
            lootWithRoot += robHouse(root->right->left, mp) + robHouse(root->right->right, mp);
        
        int lootWithoutRoot = robHouse(root->left, mp) + robHouse(root->right, mp);
        
        mp[root] = max(root->val + lootWithRoot, lootWithoutRoot);
        return mp[root];
    }
    
    int rob(TreeNode* root) {
        unordered_map<TreeNode*, int> mp;
        return robHouse(root, mp);
    }
};