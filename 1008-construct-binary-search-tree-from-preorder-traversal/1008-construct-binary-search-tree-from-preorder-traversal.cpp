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
    TreeNode* createBST(vector<int>& preorder, int low, int high) {
        if(low > high)
            return NULL;
        
        TreeNode* root = new TreeNode(preorder[low]);
        
        int pos = low;
        for(int i = low + 1; i <= high; i++) {
            if(preorder[i] > root->val)
                break;
            else
                pos = i;
        }
        
        root->left = createBST(preorder, low + 1, pos);
        root->right = createBST(preorder, pos + 1, high);
        
        return root;
    }   
    
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        return createBST(preorder, 0, preorder.size() - 1);
    }
};