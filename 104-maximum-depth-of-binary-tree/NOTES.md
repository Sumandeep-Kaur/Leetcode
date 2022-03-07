### Approach-1: Using Level Order Traversal
The depth of the Binary Tree is the number of levels in the binary tree. So, simply do a level order traversal on the binary tree and keep a count of the number of levels, it will be our answer.
* Time Complexity: *O(N)*
* Space Complexity: *O(N)*

### Approach-2: 
*If we have maximum depth of left subtree and maximum depth of right subtree then the height or depth of the tree will be:*
```
1 + max(depth of left subtree, depth of right subtree)
```
1. Start traveling binary tree recursively in Post Order.
*Reason behind using Post Order comes from our intuition , that if we know the result of  left and right child then we can calculate the result using that. 
This is exactly an indication of PostOrder, because in PostOrder we already calculated results for left and right children than we do it for current node.*
2. So for every node post order, do Max( left result , right result ) + 1 and return it to the previous call.
3. Base Case is when root == null, so return 0;
* Time Complexity: *O(N)*
* Space Complexity: *O(H)*
