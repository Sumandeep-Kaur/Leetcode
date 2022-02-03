### Solution-1: Hashing
Use a hash map for storing nodes.
Start iterating through the lists. If the current node is present in the hash map already, this indicates the cycle is present in the linked list and return that node.
Else insert the node in the hash table and move ahead. If we reach the end of the list which is NULL, then list does not have a cycle in it and hence return NULL.
- Time Complexity: O(N)
- Space Complexity: O(N)
- 
### Solution-2: Tortoise-Hare Approach
Take two pointers, namely fast and slow pointing to head initially. Fast pointer takes 2 steps ahead and slow pointer takes 1 step ahead.
Iterate through the list until the fast pointer is not equal to NULL. This is because NULL indicates that there is no cycle present in the given list.
Else, when both slow and fast pointer collides, it detects a cycle exists. Here point fast to the head of list and move both the slow and fast pointer ahead by single steps until they collide. Once they collide we get the starting node of the linked list.
- Time Complexity: O(N)
- Space Complexity: O(1)
