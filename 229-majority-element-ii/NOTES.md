### Solution-1: Brute Force
Check the count of occurrences of all elements of the array one by one. Start from the first element of the array and count the number of times it occurs in the array. If the count is greater than the floor of N/3 then that element is one of the answer.
- Time Complexity: O(N<sup>2</sup>)
- Space Complexity: O(1)

### Solution-2: Using Hashing
Use a hashmap and store as (key, count) pairs. (Can also use frequency array based on size of nums) 
Traverse the array and update the value of the key. Then check if the value is greater than floor of N/3. If yes push it to ans vector.
- Time Complexity: O(N) 
- Space Complexity: O(N)

### Solution-3: Moore’s Voting Algorithm
There can be max of only two majority elements in the array.
#### Approach:
1. Initialize num1, num2 as -1 and count1, count2 as 0. (Most frequent elements and their count) <br>
2. if ele == num1, increment count1. If ele == num2, increment count2. If count1 is 0, assign num1 = ele. If count2 is 0, assign num2 = ele.
In all the other cases decrease both count1 and count2. <br>
3. Traverse through array and count frequency of num1 and num2. If any of them is greater than N/3 then it is the majority element.
- Time Complexity: O(N)
- Space Complexity: O(1)
