### Solution-1: Naive Approach
First traverse through the Linked List and count of nodes, let’s say count. Then traverse for the 2nd time for (count - n) nodes to get to the nth node of the list and delete it.
- Time Complexity: O(N + N)
- Space Complexity: O(1)

### Solution-2: Using 2-Pointers Approach
1. Take two pointers slow and fast pointing to head.
2. Take fast pointer and move n step from the beginning. Now the first pointer is (totalNode - n + 1) steps away from the last node, which is the same number of steps the second pointer require to move from the beginning to reach the nth node from the end.
3. So, now keep incrementing both fast and slow pointers by one at the same time until the fast is pointing to the last node of the linked list.
4. The slow pointer will be pointing to the nth node from the end now. So, delete it.
- Time Complexity: O(N)
- Space Complexity: O(1)

