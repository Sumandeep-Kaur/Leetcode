### Solution-1: Naive Approach
Traverse through the Linked List while maintaining a count of nodes let’s say be n, and then traverse for 2nd time for n/2 nodes to get the middle of the list.
- Time Complexity: O(N)
- Space Complexity: O(1)

### Solution-2: Tortoise-Hare Appproach
Initialise two pointers tortoise and hare pointing to head. Increment slow ptr by 1 and fast ptr by 2, so fast ptr will travel double than that of the slow pointer. So when the fast ptr will be at the end of Linked List, slow ptr would have covered half of Linked List till then. So slow ptr will be pointing towards the middle of Linked List.
- Time Complexity: O(N)
- Space Complexity: O(1)

