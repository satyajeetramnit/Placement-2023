# Balance Parentheses
"""
Problem Statement:
A balanced sequence of parentheses is one in which every opening bracket has a corresponding closing bracket to it. 
More formally, a sequence of parantheses is considered balanced if it can be represented in the form s1(s2) where both s1 and s2 are either empty or balanced strings.

Given a sequence of parentheses, find the minimum number of swaps needed to make the sequence balanced. It is not necessary to swap adjacent characters only. 
If it is impossible to balance the string, return -1.

Example:
brackets=")()(())("
Swap the characters at the first and last index to get "(()(()))" which is balanced. The string can be balanced with 1 swap.

Function Description
Complete the function minimumSwaps in the editor below.
minimumSwaps has the following parameter(s): 
    string brackets: the string to analyze

Returns:
int: the minimum number of swaps or -1

Constraints:
1 <= length of the string brackets <= 10^5
brackets consists of ')'and '(' only

"""

# By iterating through the string in reverse order and keeping track of the number of open and closed brackets using the variables open_count and swaps. 
# If the current character is an open bracket, it increases the count of open brackets. If the current character is a closed bracket, 
# it either increases the number of swaps needed if the count of open brackets is 0, or decreases the count of open brackets otherwise. 
# Finally, the function returns the number of swaps needed if the count of open brackets is 0, or -1 if the count of open brackets is not 0, 
# indicating that it is impossible to balance the string.

def minimumSwaps(brackets):
    # Initialize a counter for the number of swaps needed
    swaps = 0
    
    # Initialize a counter for the number of open brackets
    open_count = 0
    
    # Iterate through the string in reverse order
    for i in range(len(brackets)-1, -1, -1):
        # If the current character is an open bracket, increase the count of open brackets
        if brackets[i] == '(':
            open_count += 1
        # If the current character is a closed bracket,
        # increase the number of swaps needed if the count of open brackets is 0,
        # or decrease the count of open brackets otherwise
        else:
            if open_count == 0:
                swaps += 1
            else:
                open_count -= 1
    
    # Return the number of swaps needed, or -1 if the count of open brackets is not 0
    return swaps if open_count == 0 else -1


# To further optimize the solution by using a stack to keep track of the open brackets instead of a separate counter. 
# This will allow us to avoid iterating through the entire string and stop as soon as we find an invalid character.

def minimumSwaps(brackets):
    # Initialize a counter for the number of swaps needed
    swaps = 0
    
    # Initialize a stack for the open brackets
    open_stack = []
    
    # Iterate through the string in reverse order
    for i in range(len(brackets)-1, -1, -1):
        # If the current character is an open bracket, add it to the stack
        if brackets[i] == '(':
            open_stack.append(brackets[i])
        # If the current character is a closed bracket,
        # increase the number of swaps needed if the stack is empty,
        # or pop the top element from the stack otherwise
        else:
            if not open_stack:
                swaps += 1
            else:
                open_stack.pop()
    
    # Return the number of swaps needed, or -1 if the stack is not empty
    return swaps if not open_stack else -1

