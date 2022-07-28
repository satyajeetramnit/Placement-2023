#include<bits/stdc++.h>
using namespace std;   

int findEarliestMonth(vector<int> stockPrice){
    int mini=INT_MAX;
    int month=0;
    int n=stockPrice.size();
    vector<long> pre(stockPrice.size());
    pre[0]=stockPrice[0];
    for(int i=1;i<stockPrice.size();i++){
        pre[i]=pre[i-1]+stockPrice[i];
    }
    for(int i=0;i<stockPrice.size()-1;i++){
        long lsum=pre[i]/(i+1);
        long rsum=(pre[n-1]-pre[i])/(n-i-1);
        long diff=abs(lsum-rsum);
        if(diff<mini)
        {
            mini=diff;
            month=i+1;
        }
    }

    long l=pre[n-2]/(n-1);
    long r=stockPrice[n-1];
    long d=abs(l-r);
    if(d<mini)
    {
        mini=d;
        month=n-1;
    }
    return month;
}

// same fuction in java
// public static int findEarliestMonth(List<Integer> stockPrice){
//     int mini=Integer.MAX_VALUE;
//     int month=0;
//     int n=stockPrice.size();
//     List<Long> pre=new ArrayList<Long>();
//     pre.add(stockPrice.get(0));
//     for(int i=1;i<stockPrice.size();i++){
//         pre.add(pre.get(i-1)+stockPrice.get(i));
//     }
//     for(int i=0;i<stockPrice.size()-1;i++){
//         long lsum=pre.get(i)/(i+1);
//         long rsum=(pre.get(n-1)-pre.get(i))/(n-i-1);
//         long diff=Math.abs(lsum-rsum);
//         if(diff<mini)
//         {
//             mini=diff;
//             month=i+1;
//         }
//     }

//     long l=pre.get(n-2)/(n-1);
//     long r=stockPrice.get(n-1);
//     long d=Math.abs(l-r);
//     if(d<mini)
//     {
//         mini=d;
//         month=n-1;
//     }
//     return month;
// }

int main(){
    int n;
    cin>>n;
    vector<int> stockPrice(n);
    for(int i=0;i<n;i++){
        cin>>stockPrice[i];
    }
    cout<<findEarliestMonth(stockPrice)<<endl;
    return 0;
}