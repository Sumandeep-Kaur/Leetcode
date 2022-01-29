### Solution-1: Brute Force Approach 
Loop from 1 to n and keep a ans(double) variable and multiply x with ans. At last, check if n is a negative, if so the answer will be 1 divided by ans.
- Time Complexity: O(N)
- Space Complexity: O(1)

### Solution-2: Binary Exponentiation 
Initialize ans as 1.0  and store a duplicate copy of n as pow to avoid overflow. Check if pow is a negative number, in that case, make it a positive number. <br>
Keep on iterating until pow is greater than zero, if pow is an odd power then multiply x with ans and reduce pow by 1. Else multiply x with itself and divide pow by two. <br>
At last, check if n is a negative, if so the answer will be 1 divided by ans.
- Time Complexity: O(logN)
- Space Complexity: O(1)

