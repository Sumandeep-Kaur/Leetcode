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
    vector<TreeNode*> buildTree(int start, int end) {
        vector<TreeNode*> ans;
        
        if(start > end) {
            ans.push_back(NULL);
        }

        for(int i = start; i <= end; i++) {
            vector<TreeNode*> leftList = buildTree(start, i - 1);
            vector<TreeNode*> rightList = buildTree(i + 1, end);
            for (TreeNode* leftNode : leftList) {
                for(TreeNode* rightNode : rightList) {
                    TreeNode* root = new TreeNode(i);
                    root->left = leftNode;
                    root->right = rightNode;
                    ans.push_back(root);
                }
            }
        }
        
        return ans;
    }
    
    vector<TreeNode*> generateTrees(int n) {
        return buildTree(1, n);
    }
};