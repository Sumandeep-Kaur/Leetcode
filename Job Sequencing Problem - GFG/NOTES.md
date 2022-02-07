### Solution
Approach: The strategy to maximize profit should be to pick up jobs that offer higher profits. Hence we should sort the jobs in descending order of profit. 
Now say if a job has a deadline of 4, we can perform it anytime between day 1-4, but it is preferable to perform the job on its last day. 
This leaves enough empty slots on the previous days to perform other jobs.

1. Sort the jobs in descending order of profit. 
2. Find maximum deadline, say x and make an array of size x . Each array index is set to -1 initially as no jobs have been performed yet.
3. For every job check if it can be performed on its last day.
4. If possible mark that index with the job id and add the profit to our answer. 
5. If not possible, loop through the previous indexes until an empty slot is found.
- Time Complexity: O(N logN) + O(N*M)
- Space Complexity: O(M) *<---M: Max Deadline--->*
