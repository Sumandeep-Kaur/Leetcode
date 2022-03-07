### Solution-1: Brute Force Recursion
Take any of the node 1...n as the root node. Let the chosen root node be i. Then, we have a BST where the root node is i, the left child consist of all nodes from 1...i-1 (since left sub-tree must be less than root's value) and right child consist of all nodes from i+1...n. <br>
Now, when we choose i as root node, we will have nodes from 1...i-1 (i-1 nodes in total) in left sub-tree and nodes from i+1...n (n-i nodes in total) in the right side. We can then form numTrees(i-1) BSTs for left sub-tree and numTrees(n-i) BSTs for the right sub-tree. <br>
`The total number of structurally unique BSTs formed having root i will be equal to product of these two, i.e, numTrees(i-1) * numTrees(n-i)` <br> 
The same can be followed recursively till we reach base case, numTrees(0) = numTrees(1) = 1 because we can form only a single empty BST and single node BST in these cases respectively.
![unique bst](https://user-images.githubusercontent.com/77191007/157039735-b5af45ac-5cc1-44cf-bae9-ee0cd81e6ce2.png)
* Time Complexity: *O(3<sup>N</sup>)*
* Space Complexity; *O(N)*

### Solution-2: Memoization
There are many redundant repeated calculations in the brute force solution or overlapping subproblems. We can instead store or memoize these result and later avoid repeated calculations over and over again.
* Time Complexity: *O(N<sup>2</sup>)*
* Space Complexity: *O(N + N)*

### Solution-3: Tabulation
1. We have base conditions of dp[0] = dp[1] = 1.
2. Then we calculate result for each number of nodes i from 2...n one after another.
3. For i node, we can consider each of the node j from 1...i as the root node of BST.
4. Considering the jth node as the root node in BST having total of i nodes, the **final result is summation of dp[j-1] * dp[i-j]**, for all j from 1...i. (Comparing to above solution dp[j-1] = numTrees(j-1) and dp[i-j]=numTrees(i-j))
* Time Complexity: *O(N<sup>2</sup>)*
* Space Complexity: *O(N)*

### Solution-4: Catalan Series
Observing the series for various numTrees(n), we see that it is infact a series of popular numbers known as Catalan Numbers.
![catalan](https://user-images.githubusercontent.com/77191007/157040518-0ccf4551-13b9-4b4f-961f-e1e6dd4587ce.png)

Therefore, the ans is **ncr(2n, n) / (n + 1)** <br>
Function to find ncr:
```cpp
long ncr(int n, int r) {
  long ans = 1;
  for(int i = 0; i < r; i++) {
    ans *= n-i;
    ans /= i+1;
  }
  return ans;   
}
```
* Time Complexity: *O(N)*
* Space Complexity: *O(1)*
