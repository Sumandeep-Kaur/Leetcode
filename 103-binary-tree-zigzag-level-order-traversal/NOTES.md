### Solution: BFS
*Same as level order traversal, just check size of 'ans' data-structure before pushing level nodes in it. If the size is odd, push level node after reversing them.*
1. Take a queue data structure and push the root node to the queue.
2. Set a while loop which will run till our queue is non-empty.
3. In every iteration, pop out the front of the queue and assign it to a variable (say temp).
4. If temp has a left child, push it to the queue.
5. If temp has a right child, push it to the queue.
6. At last, push the value of temp node to 'v' data-structure.
7. At the end of one level, check if size of 'ans' data-structuer is odd. If odd push the value of 'v' data-structure after reversing it to ans data structure, Else if even simply add it.

Time Complexity: O(N)
Space Complexity: O(N)
