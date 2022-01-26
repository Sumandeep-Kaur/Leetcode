### Solution-1: Brute Force 
We traverse through the array, and for each element i, we try to find another element amongst the remaining elements, such that the sum of both the elements equals the target. 
- Time Complexity: O(N2)
- Space Complexity: O(1)

### Solution-2: Two Pointer Approach
Sort the array, use two variables, each will start from one end of the array, and traverse in both directions till we get the required sum. 
- Time Complexity: O(N*logN)
- Space Complexity: O(N)

### Solution 3: Hashing
Use a hash-map to see if there’s a value (target – i) that can be added to the current array value i to get the sum equals to target. If (target – i) is found in the map, return the current index, and index stored at (target – nums[index]) location in the map. 
- Time Complexity: O(N)
- Space Complexity: O(N)
