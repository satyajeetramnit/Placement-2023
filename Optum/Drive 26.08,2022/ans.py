# # Samuel owns a shoe factory where there are N different machines operated for N different purposes. Each machine has its own motor. In order to avoid resonance, the rotation speed of any 2 machines should at least differ by 2 units. The rotation speed can only be in integer units and the maximum rotation speed of any motor is X units. Given minimum rotation speed of any motor to be 1 unit, you have to help Sam find out the number of different ways he can configure the speed of the motor. Input Specification: input1: N, denoting the number of machines. input 2X, denoting the maximum speed of the motor. Output Specification: Your function should return the total number of configuration modulus 10^4.

# # Python 3 code from itertools import combinations 
# # function to find number of ways by which Samuel can configure the speed of the motors def compute(n, x): 
# # to store numbers from 1 to x (both inclusive) nums = [] for i in range
# from itertools import combinations
# # 1 to x (both inclusive) for i in range(1, x + 1): nums.append(i)
# n, x = 2,3
# nums = list(range(1, x + 1))

# # to store all possible combinations of nums of length n
# combinations = list(combinations(nums, n))
# # to store the number of ways in which Samuel can configure the speed of the motors
# count = 0 
# for i in combinations:
#     # to store the minimum speed of the motor
#     min_speed = min(i)
#     # to store the maximum speed of the motor
#     max_speed = max(i)
#     # to store the difference between the maximum speed and minimum speed of the motor
#     diff = max_speed - min_speed
#     # to check if the difference is greater than 2
#     if diff > 2:
#         count += 1
# print(count)
# print(combinations)


# def fun(x):
#     x=6

# x=5
# fun(x)
# print(x)

# b=[1,2,2]*(-2)
# print(b)


# Python 3 code

# from itertools import combinations

# # function to find number of ways by which Samuel can configure the speed of the motors
# def compute(n, x):
#     nums = []
#     for i in range(1, x+1):
#         nums.append(i)
    
#     count = 0
    
#     comb = list(combinations(nums, n))
    
#     for c in comb:
#         flag = True
#         for i in range(n-1):
#             if abs(c[i] - c[i+1]) < 2:
#                 flag = False
#                 break
#         if flag == True:
#             count += 1
    
#     factorial_n = 1
#     for i in range(1, n+1):
#         factorial_n = factorial_n * i
        
#     count = count * factorial_n
    
#     return count%10000


# # function for taking input
# def main():
#     N = 3
#     X = 6
#     ans = compute(N, X)
#     print(ans)
 
# main()


# #input n 
# n=int(input())

# #input intial permutation
# numbers=[i for i in map(int,input().split(","))]

# #dictionary that store each number frequency
# frequency={}
# #steps required for getting final permutation
# steps=0

# #main logic 
# for i in numbers:
#     #if number in frequency that increase step
# 	if i in frequency:
# 		frequency[i]+=1
# 		steps+=1
# 	else:
# 		frequency[i]=1

# #print answer
# print(steps)

class UserMainCode(object):
    @classmethod
    def findSteps(cls, input1, input2):
        n = input1
        numbers = input2
        frequency = {}
        steps = 0
        for i in numbers:
            if i in frequency:
                frequency[i] += 1
                steps += 1
            else:
                frequency[i] = 1
        return steps

n = 3
numbers = [2,3,1]
print(UserMainCode.findSteps(n, numbers))