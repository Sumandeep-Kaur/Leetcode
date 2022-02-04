### Solution-1: Using Hashmap
1. Initialze temp pointing to head and Create a map that will point to clone.
2. 1st pass: Creation of Nodes and no wiring. Iterating through list, Point the original node to its clone node i.e., mp[temp] = new Node(temp->val);
3. 2nd pass: Filling the next and random pointers.
    - mp[temp] is the clone node and its next is the next original node's clone node. mp[temp->next] refers to the clone node of temp->next
    - Link cloned next nodes by mp[temp]->next = mp[temp->next]
    - Same thing goes for random pointer.
4. Return mp[head].
- Time Complexity: O(2 * N) ==> O(N)
- Space Complexity: O(N)

### Solution-2: In Constant Space
1. Initialze temp pointing to head.
2. Iterate through list( 1st pass ):
    - Clone a node with same val as temp. Insert the cloned node next to the original node. <br>
      *If A->B->C is the original linked list, Linked list after weaving cloned nodes would be A->A'->B->B'->C->C'*
3. Iterate through list( 2nd pass ):
    - Link random pointers of the newly created nodes and iterate through the newly created list and use original node's random pointers.
4. Initialise three pointers, namely original, cloned and clonedHead pointing to head, head's next and head's next respectively. 
5. Iterate through list( 3rd pass ):
    - Unweave the current linked list to get back the original linked list and the cloned one. <br>
     *Make A->B->C and A'->B'->C'*
6. Return clonedhead.
- Time Complexity: O(3 * N) ==> O(N)
- Space Complexity: O(N)
