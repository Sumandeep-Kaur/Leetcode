### Solution-1: Using Sorting
Sort the array. After that, if there is any duplicate number they will be adjacent. So simply check if <strong>arr[i] == arr[i+1]</strong> and if it is true, arr[i] is the duplicate number.
- Time Complexity: O(Nlogn + N)
- Space Complexity: O(1)

### Solution-2: Frequency Array or Mapping
Take a frequency array of size N+1 and initialize it to 0. Now traverse through the array and if the frequency of the element is 0 increase it by 1, else if the frequency is not 0 then that element is the required answer. We can also use map for this purpose.
- Time Complexity: O(N) 
- Space Complexity: O(N)

### Solution-3: Linked-List Cycle Method or Floyd's Tortoise-Hare Approach
In phase 1, hare = nums[nums[hare]] is twice as fast as tortoise = nums[tortoise]. Since the hare goes fast, it would be the first to enter the cycle and run around the cycle. At some point, the tortoise enters the cycle as well, and since it's moving slower the hare catches up to the tortoise at some intersection point. Now phase 1 is over, and the tortoise has lost. <br>
In phase 2, we give the tortoise a second chance by slowing down the hare, so that it now moves at the speed of tortoise: tortoise = nums[tortoise], hare = nums[hare]. The tortoise is back at the starting position, and the hare starts from the intersection point. Now the tortoise and the hare will meet at the entrance of the cycle i.e. at duplicate number.
- Time Complexity: O(N) 
- Space Complexity: O(1)

![image](https://user-images.githubusercontent.com/77191007/151662420-369e8b96-798a-4aa5-b5d5-99ec05790ed3.png)
![image](https://user-images.githubusercontent.com/77191007/151662440-4a60ead0-5d54-415a-87de-95819fddf766.png)
![image](https://user-images.githubusercontent.com/77191007/151662449-68ff8ec3-e10a-4355-aa5d-d86703902b27.png)
![image](https://user-images.githubusercontent.com/77191007/151662456-bd083630-87bd-4a79-b070-c7ec189ca8ba.png)

