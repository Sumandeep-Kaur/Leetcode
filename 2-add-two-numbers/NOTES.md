### Elementary Math
1. Create a dummy node which is the head of new linked list. Create a pointer temp and initialise it with dummy node. Initialize carry to 0.
2. Loop through lists l1 and l2 until you reach both ends and until carry is present and take care of unequal length of linked list.
   - Set sum = l1.val+ l2.val + carry.
   - Update carry = sum/10.
   - Create a new node with the digit value of (sum % 10) and set it to temp's next, then advance temp to next.
   - Advance both l1 and l2.
3. Return dummy’s next node.
- Time Complexity: O(max(m, n))
- Space Complexity: O(max(m, n))
