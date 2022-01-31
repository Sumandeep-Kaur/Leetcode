### Solution-1: Iterative Solution
<b>Step-1:</b> Initialize three pointers, one curr for current nodes and set it to head. One prev for previous nodes and set it to NULL. One next_p for next nodes. <br>
<b>Step-2:</b> While curr reaches end of list, set next_p to point next node to node pointed by curr. Then change link between nodes pointed by curr and prev and update prev to curr and curr pointer to next_p. <br>
<b>Step-3:</b> Set head as prev. This will makes the head point to the last node.
- Time Complexity: O(N)
- Space Complexity: O(1)

### Solution-2: Recursive Solution
1) Divide the list in two parts - first node and rest of the linked list. <br>
2) Call reverse for the rest of the linked list, it will return newHead pointing to last node. <br>
3) Link rest to first by making first->next->next to point on first and make first->next to NULL <br>
4) Fix head pointer(head = rest). <br>
- Time Complexity: O(N)
- Space Complexity: O(1)  *Only recursion stack*

![image](https://user-images.githubusercontent.com/77191007/151791777-9e4b2f2c-fc60-4f30-9ce0-23565028a276.gif)

