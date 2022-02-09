### Solution-1: Linear Search
Iterate through array and check for each index value if it is equal to target.
- Time Complexity: O(N)
- Space Complexity: O(1)

### Solution-2: Binary Search
It is mentioned that the array given is sorted but in a rotated manner. So, we can divide a given array into two parts that are sorted. This gives us hints to use binary search. <br>
Divide the array into parts, the mid. Check if the target is present in the mid. If not present, check if the left half of the array is sorted. This implies that binary search can be applied in the left half of the array provided the target lies between the value range. Else check into the right half of the array. Repeat the above steps until low <= high. If low > high, indicates target is not present hence return -1. 
- Time Complexity: O(logN)
- Space Complexity: O(1)
