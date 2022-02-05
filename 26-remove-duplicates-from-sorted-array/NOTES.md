### Solution-1: Using Hashmap or Set
1. Declare a HashSet.
2. Run a for loop from starting to the end and Put every element of the array in the set.
3. Store size of the set in a variable K.
4. Now put all elements of the set in the array from the starting of the array.
5. Return K.
- Time Complexity: O(NlogN + N)
- Space Complexity: O(N)

### Solution-2: Using Two Pointers
1. Take a variable i as 0;
2. Use a for loop by using a variable j from 1 to length of the array.
3. If arr[j] != arr[i], increase i and update arr[i] = arr[j].
4. After completion of the loop return i+1, i.e size of the array of unique elements.
- Time Complexity: O(N)
- Space Complexity: O(1)
