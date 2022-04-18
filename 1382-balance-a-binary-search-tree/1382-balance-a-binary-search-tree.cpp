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
    void inorder(TreeNode* root, vector<int>& v) {
        if(root != NULL) {
            inorder(root->left, v);
            v.push_back(root->val);
            inorder(root->right, v);
        }    
    }
    
    TreeNode* balanceBST(TreeNode* root) {
        vector<int> nums;
        inorder(root, nums);
        return createBST(nums, 0, nums.size() - 1);
    }
    
    TreeNode* createBST(vector<int>& nums, int low, int high) {
        if(low <= high) {
            int mid = (low + high)/2;
            TreeNode* root = new TreeNode(nums[mid]);
            root->left = createBST(nums, low, mid - 1);
            root->right = createBST(nums, mid + 1, high);
            return root;
        }
        return NULL;
    }
};