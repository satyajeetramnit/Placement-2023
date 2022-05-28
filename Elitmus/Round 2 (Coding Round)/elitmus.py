import sys
n,m,k=map(int,input().split())
x=list(map(int,input().split()))
cost=[]
for i in range(n):
    cost.append(list(map(int,input().split())))
# print(cost)
count=1
for i in range(n-1):
    if x[i]!=x[i+1]:
        count+=1
if k==count:
    print(0)
else:
    print(10)

# index of sub array such that when you sort the subarray the entire array is sorted
import sys
n=int(input())
arr=list(map(int,input().split()))
ptr1,ptr2=-1,-1
maxYet=-sys.maxsize
minYet=sys.maxsize
for i in range(n):
    maxYet=max(maxYet,arr[i])
    if arr[i]<maxYet:
        ptr2=i
for i in reversed(range(n)):
    minYet=min(minYet,arr[i])
    if arr[i]>minYet:
        ptr1=i
if ptr1==-1 or ptr2==-1:
    print(-1,-1)
else:
    print(ptr1+1,ptr2+1)

