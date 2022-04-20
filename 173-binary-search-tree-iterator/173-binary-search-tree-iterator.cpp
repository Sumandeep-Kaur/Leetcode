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
class BSTIterator {
public:
    stack<TreeNode*> st;
    BSTIterator(TreeNode* root) {
        pushLeftMost(root);
    }
    
    int next() {
        if(hasNext() == false)
            return -1;
        TreeNode* curr = st.top();
        st.pop();
        pushLeftMost(curr->right);
        return curr->val;
    }
    
    bool hasNext() {
        return st.empty()? false : true;
    }
    void pushLeftMost(TreeNode* root) {
        while(root != NULL) {
            st.push(root);
            root = root->left;
        }
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */