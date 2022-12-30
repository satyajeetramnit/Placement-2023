# Modulo Challenge
"""
One of the significant advantages of project work is that it makes school more like real life. To make the learning more interactive, 
Professor Hill decided to teach modulo arithmetic concepts to the students by giving a project work.

Professor Hill takes an array of numbers and asks the students to perform the following operation: pick two adjacent positive numbers, 
a[i] and a[i+1] and replace the two numbers with either (a % a[i+1]) or (a[i+1] % a[i]),
where x % y denotes x modulo y. Thus, after each operation, the array's length decreases by 1.

The task is to find the minimum possible length of the array, which can be achieved by performing the above operation any number of times.

Example
Consider the array's length to be n = 4 and the array of
numbers to be arr=[1, 1, 2, 3]. The following sequence of operations can be performed (considering 1-based indexing)

1. arr = [1, 1, 2, 3] : Choose i = 3 thus arr[i] = 2 and arr[i + 1] = 3. We get the new value to be given by 2 % 3 = 2 or 3 % 2 = 1. The resulting array can thus be [1, 1, 2] or [1, 1, 1]. We consider the former one to minimize the array length.
2. arr = [1, 1, 2] : Choose i = 2 thus arr[i] = 1 and arr[i+1] = 2. We can get the new array as [1, 1].
3. arr[1, 1] : Choose i = 1 to get the array [0].

Thus the minimum possible length for the above array would be 1.

Function Description
Complete the function getMinLength in the editor below.
getMinLength has the following parameter: 
  int arr[arr[0]...arr[n-1]]: the given array of integers

Returns
int: the minimum possible length of the array.

Constraints
1 <= n <= 10^5
1 <= arr[i] <= 10^9

"""

# Here we are looping through the array and performing the operation that results in the smallest array until the length of the array is 1.
def getMinLength(arr):
    # Keep looping until the array has only one element
    while len(arr) > 1:
        # Find the minimum of the two possible operations
        min_val = min(arr[0] % arr[1], arr[1] % arr[0])
        
        # Replace the two elements with the minimum value
        arr[0] = min_val
        arr[1:] = arr[2:]
    
    # Return the final length of the array
    return len(arr)

# Another solution which failed few of the test cases would be
import math
import sys
 
def moduloChallenge(arr):
    n=len(arr)
    if n == 1 or n == 2:
        return 1
 
    min_ele = sys.maxsize
    cnt = 0
    for i in range(n):
        if arr[i] < min_ele:
            cnt = 0
            min_ele = arr[i]
        if arr[i] == min_ele:
            cnt += 1
 
    return math.ceil(cnt / 2)

# But this solution aims to solve the problem by finding the minimum element in the array and counting the number of times it appears. If the minimum element appears an odd number of times, the function returns the result of dividing this count by 2 and rounding up. If the minimum element appears an even number of times, the function returns the count divided by 2.

# This approach is incorrect, because it does not take into account the operations described in the problem. The final length of the array is not determined solely by the minimum element and its count, but also by the choices made during the operations.

# For example, consider the array [1, 1, 2, 3]. The minimum element in this array is 1, and it appears twice. If we follow the logic of the provided solution, we would expect the minimum possible length of the array to be 1 (since 2 divided by 2 is 1). However, the correct minimum length is actually 2, because we can perform the operations (1 % 2) % 3 and (3 % 1) % 2 to get the final array [0, 0].

# To solve this problem correctly, we need to perform the operations described in the problem until the length of the array becomes 1. At each iteration, we can choose the optimal operation by comparing the results of the two possible operations and selecting the one that results in a smaller array.

# The problem we faced was that, the several cases we didn't get the minimum possible length of the array as 1. Here are a few examples where we will get so:

# 1. If the array contains only one element, the minimum length is 1.
# 2. If the array contains two elements that are equal, the minimum length is 1. This is because we can perform the operation (a[0] % a[1]) % a[0] or (a[1] % a[0]) % a[1] to get the final array [0].
# 3. If the array contains two elements that are not equal, the minimum length is 1. This is because we can perform the operation (a[0] % a[1]) % a[0] or (a[1] % a[0]) % a[1] to get the final array [1].
# 4. If the array contains more than two elements and all elements are equal, the minimum length is 1. This is because we can perform the operation (a[0] % a[1]) % a[2] % ... % a[n-1] % a[0] or (a[n-1] % a[0]) % a[1] % ... % a[n-2] % a[n-1] to get the final array [a[0]].
# 5. If the array contains more than two elements and all elements are not equal, the minimum length is 1. This is because we can perform the operation (a[0] % a[1]) % a[2] % ... % a[n-1] % a[0] or (a[n-1] % a[0]) % a[1] % ... % a[n-2] % a[n-1] to get the final array [a[0]] if all elements are equal, or [a[n-1]] if all elements are not equal.
