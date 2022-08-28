# Given a series of step. Each step has some magical coins.
# You are at first step in the beginning.
# In one jump, you can jump to the xth step from the current step,
# where x is the number of coin you take from that step. You have to reach till last step. 
# Find the minimum number of jump required to reach till last step.

# [2,3,1,1,4,0]
# 0->1->4->5    min. jump=3
# 0->2->3->4-5  jump = 4

# Approach 1:
# We can make a jumps[] array from left to right 
# such that jumps[i] indicate the minimum number of jumps needed to reach arr[i] from arr[0].
# Then To fill the jumps array we run a nested loop 
# inner loop counter is j and outer loop count is i.
# Outer loop from 1 to n-1 and inner loop from 0 to i.
# If i is less than j + arr[j] then set jumps[i] to minimum of jumps[i] and jumps[j] + 1. 
# Initially set jump[i] to INT MAX
# Finally, return jumps[n-1].

def minJump(arr,n):
    jumps = [0 for i in range(n)]
    if n==0 or arr[0]==0:
        return 0
    jumps[0] = 0
    for i in range(1,n):
        jumps[i] = float('inf')
        for j in range(0,i):
            if i <= j + arr[j] and jumps[j] != float('inf'):
                jumps[i] = min(jumps[i],jumps[j]+1)
                break
    return jumps[n-1]

# Time Complexity: O(n^2)
# Space Complexity: O(n)

# Approach 2
# First, we test whether we have reached the end of the array, in that case, we just need to return the jump variable.
# Next we update the maxReach. This is equal to the maximum of maxReach and i+arr[i](the number of steps we can take from the current position). 
# We used up a step to get to the current index, so steps has to be decreased. 
# If no more steps are remaining (i.e. steps=0, then we must have used a jump. Therefore increase jump. Since we know that it is possible somehow to reach maxReach, we again initialize the steps to the number of steps to reach maxReach from position i. But before re-initializing step, we also check whether a step is becoming zero or negative. In this case, It is not possible to reach further. 

def minJumps(arr,n):
    if (n <= 1):
        return 0
  
    if (arr[0] == 0):
        return -1
    
    maxReach = arr[0] 
    step = arr[0]
    jump = 1
  
    for i in range(1, n):
        if (i == n-1):
            return jump
  
        maxReach = max(maxReach, i + arr[i])
        step -= 1
  
        if (step == 0):
            jump += 1
       
            if(i >= maxReach):
                return -1
  
            step = maxReach - i
    return -1

# Time Complexity: O(n)
# Space Complexity: O(1)

array=[2,3,1,1,4,0]
n=len(array)
print(minJumps(array,n))

