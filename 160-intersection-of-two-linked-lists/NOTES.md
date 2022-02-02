### Solution-1: Brute-Force Approach
Keep any one of the list to check its node present in the other list. Check if the both nodes are the same. If yes, it is the intersection node. If not, continue iteration.
If entire iteration of the second list is completed then there is no intersection between the provided lists. Hence, return null.
- Time Complexity: O(n*m)
- Space Complexity: O(1)

### Solution-2: Using Hashing or Set
Iterate through list-1 and hash its node address. Then, Iterate through list-2 and search the hashed value in the hash table. If found, return node.
- Time Complexity: O(n+m)
- Space Complexity: O(n)

### Solution-3: Difference of length
In this approach try to reduce the search length by searching the length of the shorter linked list. 
1. Find length of both the lists and the difference of these lengths.
2. Move the pointer of the larger list by difference achieved. This makes our search length reduced to the smaller list length.
3. Move both pointers, each pointing two lists, ahead simultaneously if both do not collide.
- Time Complexity: O(max(l1, l2) + abs(l1 - l2) + min(l1, l2)) ==>  O(max(l1, l2))
- Space Complexity: O(1)

### Solution-4: Optimised Approach
Take two dummy nodes for each list and Point each to the head of the lists. Iterate over them. If anyone becomes null, point them to the head of the opposite lists and continue iterating until they collide and return it.
- Time Complexity: O(2 * max(l1, l2))
- Space Complexity: O(1)
