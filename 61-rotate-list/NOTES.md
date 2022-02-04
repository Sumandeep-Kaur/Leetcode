### Solution-1: Brute Force
Move the last element to first for each k i.e., For each k, find the last element from the list and move it to the first.
- Time Complexity: O(N*k)
- Space Complexity: O(1)

### Solution-2: Optimized Approach
1. Calculate length of the list
2. Connect the last node to the first node, converting it to a circular linked list.
3. Iterate till (len - k) to cut the link of the last node and start a node of (k % len) times rotated list.
- Time Complexity: O(N + (N - N % k))  ==> O(N)
- Space Complexity: O(1)
