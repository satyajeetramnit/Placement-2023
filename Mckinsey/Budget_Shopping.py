def budgetShopping(n, bundleQuantities, bundleCosts):
    # Write your code here
    if n<=0 or len(bundleCosts)==0 or len(bundleQuantities)==0 or len(bundleCosts)!=len(bundleQuantities):
        return 0
    maxi=[0]
    calculate(n,bundleCosts,bundleQuantities,maxi,0,0);
    return maxi[0]

def calculate(n,bundleCosts,bundleQuantities,maxi,pos,count):
    if n==0 or pos==len(bundleCosts):
        if count>maxi[0]:
            maxi[0]=count
        return
    for i in range(0,n//bundleCosts[pos]+1):
        calculate(n-i*bundleCosts[pos],bundleCosts,bundleQuantities,maxi,pos+1,count+i*bundleQuantities[pos])