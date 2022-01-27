### Solution-1: Brute Force
Use a stack to push all the words in a stack(Remove extra spaces while pushing words). Then, Pop elements of the stack one by one and add them to answer variable. Remember to add a space between the words as well. 
- Time Complexity: O(N)
- Space Complexity: O(N)

### Solution-1: Optimized Approach
Start traversing the string from the left until we hit a space. It indicates that we have gone past a word and now we need to store it. (Store to ans if temp var is not empty to remove extra spaces).
Check if the answer variable is empty or not. If it’s empty, it indicates that this is the last word to print and hence, there shouldn’t be any space after this word else add it to result with a space after it.
- Time Complexity: O(N)
- Space Complexity: O(1)
