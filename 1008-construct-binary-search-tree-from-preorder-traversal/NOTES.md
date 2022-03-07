### Solution
1. Recursively create BST by passing preorder, low = 0, high = n (preorder size).
2. As base case if low > high, return NULL.
3. Create root node taking preorder[low]
4. Find an index idx betweeen low and high where preorder[i] > root->val.
5. Now create left subtree of BST by taking low and high as low + 1 and idx and right subtree by taking low and high as idx + 1 and high resp.
 
* Time Complexity: *O(N)*
* Space Complexity: *O(N)*
