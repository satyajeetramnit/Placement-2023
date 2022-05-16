# Given three integers, i, j, and k, a sequence sum to be the value fi + (i + 1) +(i+2)+(i + 3) + ... + j + (j − 1) + (j − 2) + (j -3)+...+k (increment from / until it equals j, then decrement from juntil it equals k). Given values i, j, and k, calculate the sequence sum as described.

def getSequenceSum(i,j,k):
    a=(j-1+1) * (i+j)
    b=(j-k) * (k+j-1)
    return a//2+b//2