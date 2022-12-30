# Problem Statement
"""
A recurrence relation is an equation that expresses each element of a sequence as a function of the preceding ones. 
Consider the recurrence relation where { F[0] = a , F[1] = b, F[2] = c } and { F[i] = (F[i-1] OR F[i-2]) XOR F[i-3] } for {i >= 3}.

Given four integers [ a, b, c ] and [n]. Find F[n].

Example
Let [ a = 4, b = 1, c = 10 ] and [ n = 4 ]
Output: 14

Explanation:
F[0] = 4, F[1] = 1, F[2] = 10, 
F[3] = ( F[2] OR F[1] ) XOR F[0] = (10 OR 1) XOR 4 = 15
F[4] = ( F[3] OR F[2] ) XOR F[1] = (15 OR 10) XOR 1 = 14
Hence, in this case, returned value should be 14.

Function Description
Complete the function bitwiseRecurrence in the editor below. The function must return F[n].

bitwiseRecurrence has the following parameters:
a: an integer denoting F[0]
b: an integer denoting F[1]
c: an integer denoting F[2]
n: an integer

"""
# An iterative approach that starts from the base cases and calculates each subsequent element of the sequence using the given recurrence relation.

def bitwiseRecurrence(a, b, c, n):
    # Base cases
    if n == 0:
        return a
    elif n == 1:
        return b
    elif n == 2:
        return c

    # Initialize array to store values of F
    F = [None] * (n+1)

    # Set base cases
    F[0] = a
    F[1] = b
    F[2] = c

    # Calculate F[i] for i >= 3 using the recurrence relation
    for i in range(3, n+1):
        F[i] = (F[i-1] | F[i-2]) ^ F[i-3]

    return F[n]

# A recursive approach, where each element of the sequence is calculated by calling the function recursively with the appropriate input values.
# The recursive approach can be slower and less efficient than the iterative approach, since it requires the function to be called multiple times for each element of the sequence. 
# This can lead to longer running times and increased memory usage, especially for larger values of n. However, the recursive approach can be easier to understand and implement in some cases.

def bitwiseRecurrence(a, b, c, n):
    # Base cases
    if n == 0:
        return a
    elif n == 1:
        return b
    elif n == 2:
        return c

    # Recursive case
    return (bitwiseRecurrence(a, b, c, n-1) | bitwiseRecurrence(a, b, c, n-2)) ^ bitwiseRecurrence(a, b, c, n-3)

# Alternatively
# Using a combination of dynamic programming and memoization to optimize the recursive approach.
# By using a cache dictionary to store previously calculated values of F[i], keyed by the values of F[i-1], F[i-2], and F[i-3]. 
# This allows us to avoid recalculating F[i] if ywe have already calculated it before, which can greatly improve the efficiency of the function.
# We are also keeping track of a cycle_list which stores the sequence of keys that you have already encountered in the cache dictionary. 
# If we encounter a key that is already in the cycle_list, it means that we have entered a cycle in the recurrence relation, 
# and F[i] will always be equal to the value of F[i % len(cycle_list)] for any i greater than the length of the cycle_list.

# Using this optimization, we are able to calculate F[n] for large values of n much more efficiently than the naive recursive approach.

def bitwiseRecurrence(a, b, c, n):
    # If n is less than 3, return the appropriate base case value
    if n < 3:
        if n == 0:
            return a
        elif n == 1:
            return b
        elif n == 2:
            return c
    
    # Initialize an empty cache dictionary and an empty cycle_list
    cache = {}
    cycle_list = []
    
    # Iterate through the range of i from 3 to n
    for i in range(3, n + 1):
        # Define the cache_key_1 and cache_key_2 values for this iteration
        cache_key_1 = (c, b, a)
        cache_key_2 = (b, c, a)
        
        # If the cycle_list is not empty and cache_key_1 is the first element of the cycle_list,
        # it means that we have entered a cycle in the recurrence relation.
        # In this case, we can return the value of F[i % len(cycle_list)] from the cache.
        if len(cycle_list) != 0 and cache_key_1 == cycle_list[0]:
            answer_key = cycle_list[(n - i) % len(cycle_list)]
            return cache[answer_key]
        
        # If cache_key_1 is in the cache, set fi to the corresponding value and append cache_key_1 to the cycle_list.
        # If cache_key_2 is in the cache, set fi to the corresponding value.
        # Otherwise, calculate fi using the recurrence relation and reset the cycle_list.
        if cache_key_1 in cache:
            fi = cache[cache_key_1]
            cycle_list.append(cache_key_1)
        elif cache_key_2 in cache:
            fi = cache[cache_key_2]
        else:
            fi = (c | b) ^ a
            cycle_list = []
        
        # Add the value of fi to the cache for both cache_key_1 and cache_key_2
        cache[cache_key_1] = fi
        cache[cache_key_2] = fi
        
        # Update the values of a, b, and c for the next iteration
        a = b
        b = c
        c = fi
        
    # Return the final value of c
    return c

print(bitwiseRecurrence(0, 0, 0, 2))
print(bitwiseRecurrence(3, 2, 5, 5))