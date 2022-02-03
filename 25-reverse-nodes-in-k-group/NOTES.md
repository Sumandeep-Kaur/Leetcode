### Solution
1. Iterate through the given linked list to get the length of the list.
2. Create a dummy node. Point next to this node to head of the linked list provided.
3. Create three pointers pre, cur and nex pointing to dummy node initially.
4. Iterate through the linked list until the length of list to be processed is greater than and equal to given k.
5. For each iteration, point cur to pre->next and nex to cur->next.
6. Start nested iteration for length of k. For each iteration, modify links as following steps:-
   
    - cur->next = nex->next
    - nex->next = pre->next
    - pre->next = nex
    - nex = cur->next
7. Move pre to cur and reduce length by k.
8. At last return dummy's next.

- Time Complexity: O(N)
- Space Complexity: O(1)
