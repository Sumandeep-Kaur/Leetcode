### Solution: BFS
1. Take a queue data structure and push the root node to the queue.
2. Set a while loop which will run till our queue is non-empty.
3. In every iteration, pop out the front of the queue and assign it to a variable (say temp).
4. If temp has a left child, push it to the queue.
5. If temp has a right child, push it to the queue.
6. At last push the value of the temp node to our “ans” data structure.

* Time Complexity: *O(N)*
* Space Complexity: *O(N)*
