### Solution-1: Merge Algorithm of Merge-Sort
Since each list, followed by the bottom pointer, are in sorted order and Our main aim is to make a single list in sorted order of all nodes. So, we can think of a merge algorithm of merge sort.
<br>
The process to flatten the given linked list is as follows:
1. We will recurse until the head pointer moves null. The main motive is to merge each list from the last.
2. Merge each list chosen using the merge algorithm. The steps are
    - Create a dummy node. Point two pointers, i.e, temp and res on dummy node. res is to keep track of dummy node and temp pointer is to move ahead as we build the flatten list.
    - Iterate through the two chosen sub-lists. Move head from any of the chosen list ahead whose current pointed node is smaller and link temp->next to smaller node. 
    - Return the new flattened list found i.e. res->next.
3. Repeat step-2 until all sub-lists have been merged.
- Time Complexity: O(N X M)
- Space Complexity: O(1)   <-------- *Only Recursion Stack*  -------->

### Solution-2: Using Heaps
1. Push all the heads of the linked lists in the priority queue's downward list.
2. Pop the node with the smallest priority from the priority queue.
3. Check the node's location so that the next node which is being pointed by the current node can be inserted into the priority queue.
4. Pop the smallest element once more and push the next node pointed by the current node until the heap is empty.
5. Continue to add node data to a new linked list that is popped out to the new list.
6. Print the above-mentioned linked list.
- Time Complexity: O(N*logM)   <-------- *N: No. of nodes in sub-list & M: No. of nodes in main linked-list* -------->
- Space Complexity: O(N) 
