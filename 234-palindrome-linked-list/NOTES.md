### Solution-1: Using Array
Iterate through linked list and store elements in an array. Then check if the given array is a palindrome or not!
- Time Complexity: O(N + N)
- Space Complexity: O(N)

### Solution-2: Using Stack
Iterate through linked list and push elements in stack. Then iterate through another pass, match and pop the values from stack. If there is any mismatch, linked list is not a palindrome.
- Time Complexity: O(N + N)
- Space Complexity: O(N)

### Solution-3: Optimised Approach
1. Find the middle element of the linked list. 
2. Reverse linked list from the of middle element to the end. 
3. Compare node values from start and middle iterating until the middle element reaches the end of the list. 
- Time Complexity: O(N/2 + N/2 + N/2)
- Space Complexity: O(1)

