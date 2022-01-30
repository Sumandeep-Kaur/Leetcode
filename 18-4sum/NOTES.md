### Solution-1: Brute Force 
Traverse through the array in four loops and for each element i, j, k, try to find another element amongst the remaining elements, such that the sum of all the elements equals the target. 
- Time Complexity: O(N<sup>4</sup>)
- Space Complexity: O(1)

### Solution-2: Using 3-pointers and Binary Search
Sort the array first. Then fix three numbers as nums[i], nums[j] and nums[k], and search for the remaining (target – (nums[i] + nums[j] + nums[k])) in the array using binary search. 
- Time Complexity: O(NlogN + N<sup>3</sup>logN)
- Space Complexity: O(1)

### Solution 3: Two Pointer Approach
Sort the array and then fix two pointers, so the remaining sum will be (target – (nums[i] + nums[j])). Now fix two pointers, one front and another back and easily use a two-pointer to find the remaining two numbers of the quad as used in Two Sum Problem. In order to avoid duplications, jump the duplicates, by skipping the same elements by running a loop. 
- Time Complexity: O(N<sup>3</sup>)
- Space Complexity: O(1)


#### Problem can be solved in TC: O(N<sup>2</sup>logN) and SC: O(N<sup>2</sup>) using hash map.
