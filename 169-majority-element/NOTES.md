### Solution-1: Brute Force
Check the count of occurrences of all elements of the array one by one. Start from the first element of the array and count the number of times it occurs in the array. If the count is greater than the floor of N/2 then return that element as the answer. If not, proceed with the next element in the array and repeat the process.
- Time Complexity: O(N<sup>2</sup>)
- Space Complexity: O(1)

### Solution-2: Using Hashing
Use a hashmap and store as (key, count) pairs. (Can also use frequency array based on size of nums) 
Traverse the array and update the value of the key. Then check if the value is greater than floor of N/2. If yes, return the key Else iterate forward.
- Time Complexity: O(NlogN) with map and O(N) with frequency array
- Space Complexity: O(N)

### Solution-3: Moore’s Voting Algorithm
This algorithm works on the fact that if an element occurs more than N/2 times, it means that the remaining elements other than this would definitely be less than N/2. <br>
- Majority element count = <b>N/2 + x</b> 
- Minority/Other elements = <b>N/2 – x</b> <br>
Where x is the number of times it occurs after reaching the minimum value N/2. <br>
This means count of minority elements and majority element are equal upto certain point of time in the array. So when we traverse through the array we try to keep track of the count of elements and which element we are tracking. Since the majority element appears more than N/2 times, we can say that at some point in array traversal we find the majority element. 
#### Approach:
1. Initialize count as 0 and element as -1. <br>
2. Traverse through nums array. If count is 0 then initialize the current traversing integer of array as element. <br>
If the traversing integer of array and Element are same increase count by 1 else decrease count by 1.
3. If there always exist majority-element then element is final answer else traverse through array and count its frequency. If it it greater than N/2 then it is the amjority element else no majority element exists in the array.
- Time Complexity: O(N)
- Space Complexity: O(1)
