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
    void dfs(TreeNode* root, set<int>& v) {
        if(root == NULL)
            return;
        v.insert(root->val);
        dfs(root->left, v);
        dfs(root->right, v);
    }
    int findSecondMinimumValue(TreeNode* root) {
        set<int> nums;
        dfs(root, nums);
        if(nums.size() <= 1)
            return -1;
        return *next(nums.begin(), 1);
    }
};