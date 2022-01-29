### Solution-1: Brute Force Approach
Traverse through every element present in the matrix and return true if found any element in the matrix equal to the target. If the traversal is finished return false as target element is not present in the matrix.
- Time complexity: O(m*n)
- Space complexity: O(1)

### Solution-2: Binary Search
As it is mentioned that the given matrix will be row-wise and column-wise sorted, this means the elements in the matrix will be in a increasing order. So we can apply binary search to search the matrix. <br>
Consider the 2D matrix as a 1D matrix having indices from 0 to (m*n)-1 and apply binary search. Middle element can be accessed using <strong>matrix[middle/column][middle%column]</strong>.
- Time complexity: O(log(m*n))
- Space complexity: O(1)
