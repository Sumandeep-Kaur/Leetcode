### Solution-1: Brute Force
Find all possible permutations of elements present and store them. Search input from all possible permutations and Print the next permutation present right after it.
- Time Complexity: O(N!xN)
- Space Complexity: O(1)

### Solution-2: Optimized Approach
Step 1: Traverse array from the end such that ith index value of the array is less than (i+1)th index value. Store that index in a variable. <br>
Step 2: If the index value received from step 1 is less than 0, the given input array is the largest lexicographical permutation. Hence, reverse the input array to get the minimum or starting permutation. <br>
Step 3: Else traverse array from end and Find an index that has a value greater than the previously found index. Swap values present in these indices. Then, Reverse array from index+1 where the index is found at step 1 till the end of the array.
- Time Complexity: O(N)
- Space Complexity: O(1)
