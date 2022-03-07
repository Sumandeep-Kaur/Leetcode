### Solution
* *Take root from start of preorder.*
* *Recursively construct left subtree taking inorder from in'start to root->val's index - 1 and left root from pre'start + 1 of preorder.*
* *Construct right subtree taking inorder from root->val's index + 1 to in'end and right root form pre'start + 1 + root->val's index - in'start.*

1. Call recursive function to construct the tree passing inorder, preorder, inStart = 0, inEnd = n - 1, preIdx = 0.
2. In the recursive function, first check the base case, if (preIdx > n || inStart > inEnd) then return NULL.
3. Construct a node, say root with the root value as preorder[preIdx].
4. Find index inIdx in the inorder where inorder[i] = root->val.
5. Call recursively for the left subtree passing inStart, inIdx - 1, preIdx + 1.
6. Call recursively for the right subtree passing inIdx + 1, inEnd, preIdx + 1, inIndx - inStart.
7. Return root
* Time Complexity: *O(N)*
* Space Complexity: *O(N)*
