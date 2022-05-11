# Divisor & Multiple
def getCount(arr):
    n=len(arr)
    ans=[]
    for i in range(n):
        j=[k for k in range(i,n) if (arr[k]%arr[i]==0 or arr[i]%arr[k]==0) and k!=i]
        ans.append(len(j))
    return ans

# Extra ordinary substring
def countSubstrings(s):
    n=len(s)
    ans=[]
    value=['ab','cde','fgh','ijk','lmn','opq','rst','uvw','xyz']
    for i in range(n):
        if s[i] in value:
            j=[k for k in range(i,n) if s[k] in value and len(j)%k==0]
            ans.append(len(j))
    return ans

#Longest work slot
def findLongestSingleSlot(leaveTimes):
    pv,d,maxd,id=0,0,0,0
    for i in range(len(leaveTimes)):
        d=leaveTimes[i][1]-pv
        pv=leaveTimes[i][1]
        if d>maxd:
            maxd=d
            id=leaveTimes[i][0]
    return (chr)(id+97)