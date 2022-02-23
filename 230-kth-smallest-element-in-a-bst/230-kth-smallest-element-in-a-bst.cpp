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
    int kthSmallest(TreeNode* root, int k) {
        stack<TreeNode*> st;
        int kthSmall;
        while(st.size() > 0 || root != NULL) {
            while(root != NULL) {
                st.push(root);
                root = root->left;
            }
            TreeNode* top = st.top();
            st.pop();
            k--;
            if(k == 0) {
                kthSmall = top->val;
                break;
            }
            root = top->right;
        }
        return kthSmall;
    }
};