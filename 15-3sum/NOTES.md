### Solution-1: Brute Force
Keep three-pointers i,j, and k. For every triplet find the sum of A[i]+A[j]+A[k]. If this sum is equal to zero, we’ve found one of the triplets and add it to our data structure and continue with the rest.
- Time Complexity: O(N<sup>3</sup>)
- Space Complexity: O(1)

### Solution-2: Using 2-pointers and Binary Search
Sort the array first. Then fix two numbers as nums[i] and nums[j] and search for the remaining (0 – (nums[i] + nums[j])) in the array using binary search.
- Time Complexity: O(N<sup>2</sup>logN)
- Space Complexity: O(1)

### Solution-3: Two-Pointer Approach
Sort the array first. Then fix the i pointer and then apply the traditional 2 pointer approach as used in Two Sum Problem to check whether the sum of three numbers equals zero. 
- Time Complexity: O(N<sup>2</sup>)
- Space Complexity: O(1)
