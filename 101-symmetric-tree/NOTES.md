### Solution
*For Symmetric tree, root->left == root->right and root->left->left == root->right->right ans so on...*
1. Check for symmetricity recursively for root->left and root->right in another function.
2. For the base case, if both are pointing to NULL, return true, whereas if only one points to NULL and other to a node, return false.
3. If both points to a node, first compare their value, if it is the same check for the lower levels of the tree.
4. Recursively call the function to check the  left_root’s left child with right_root’s right child. Then again recursively check the left_root’s right child with right_root’s left child.
5. When all three conditions (node values of left and right and two recursive calls) return true, return true from the function else return false.

* Time Complexity: *O(N)*
* Space Complexity: *O(N)*
