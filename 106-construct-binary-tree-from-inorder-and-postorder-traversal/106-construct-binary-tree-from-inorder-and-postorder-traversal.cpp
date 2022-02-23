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
    TreeNode* constructTree(vector<int>& inorder, vector<int>& postorder, int instart, int inend, int postidx) {
        if(instart > inend || postidx < 0)
            return NULL;
        
        TreeNode* root = new TreeNode(postorder[postidx]);
        
        int inidx = instart;
        for(; inidx <= inend; inidx++) {
            if(inorder[inidx] == postorder[postidx])
                break;
        }
        
        root->left = constructTree(inorder, postorder, instart, inidx - 1, postidx + inidx - inend - 1);
        root->right = constructTree(inorder, postorder, inidx + 1, inend, postidx - 1);
        
        return root;
    }
    
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        return constructTree(inorder, postorder, 0, inorder.size() - 1, postorder.size() - 1);
    }
};