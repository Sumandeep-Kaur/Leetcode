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
    TreeNode* constructTree(vector<int>& preorder, vector<int>& inorder, int instart, int inend, int preidx) {
        if(instart > inend || preidx > preorder.size()) 
            return NULL;
        
        TreeNode* root = new TreeNode(preorder[preidx]);
        int inidx = instart; 
        for(; inidx <= inend; inidx++){
            if(inorder[inidx] == preorder[preidx])
                break;
        }
        
        root->left = constructTree(preorder, inorder, instart, inidx-1, preidx+1);
        root->right = constructTree(preorder, inorder, inidx+1, inend, preidx + 1 + inidx - instart);
        
        return root;
    }
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return constructTree(preorder, inorder, 0, inorder.size() - 1, 0);
    }
};