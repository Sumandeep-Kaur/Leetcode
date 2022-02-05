### Solution-1: Brute Force Approach
For each index, find the amount of water that can be stored and sum it up. If we observe carefully the amount the water stored at a particular index is the minimum of maximum height to the left and right of the index minus the height at that index. <br>
So, traverse through array and find its leftMax and rightMax by another loop. Then, calculate watertrapped by min(leftMax, rightMax) - height[i];
- Time Complexity: O(N<sup>2</sup>)
- Space Complexity: O(1)

### Solution-2: Better Approach
Take 2 array maxLeft and maxRight array and precompute the leftMax and rightMax for each index beforehand. Then use the formula min(maxLeft[i], maxRight[i]) - height[i] to compute water trapped at each index.
- Time Complexity: O(3*N)
- Space Complexity: O(N + N)

### Solution-3: Two-Pointer Approach
1. Take 2 pointer left and right pointing to 0th and (n-1)th index respectively. Take two variables leftMax and rightMax and initialise it to 0.
2. If height[left] is less than or equal to height[right] then if leftMax is less then height[left], update leftMax to height[left] else add leftMax - height[left] to your final answer and move the left pointer to the right i.e l++.
3. If height[right] is less then height[left], then now we are dealing with the right block. If height[right] is greater then rightMax, then update rightMax to height[right] else add rightMax - height[right] to the final answer and move r to the left. 
4. Repeat theses steps till l and r crosses each other.
- Time Complexity: O(N)
- Space Complexity: O(1)
