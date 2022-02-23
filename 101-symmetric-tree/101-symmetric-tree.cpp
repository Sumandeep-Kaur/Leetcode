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
    bool checkSymmetric(TreeNode* leftRoot, TreeNode* rightRoot) {
        if(leftRoot == NULL || rightRoot == NULL)
            return leftRoot == rightRoot;
        
        return (leftRoot->val == rightRoot->val && checkSymmetric(leftRoot->left, rightRoot->right) && checkSymmetric(leftRoot->right, rightRoot->left));
    }
    
    bool isSymmetric(TreeNode* root) {
        return checkSymmetric(root->left, root->right);
    }
};