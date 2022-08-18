#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;

int main(){
    int t;
    cin>>t;
    int Disturbance=INT_MAX;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        int d=(sum-a[n-1])-((n-1)*a[n-1]);
        // cout<<"D="<<d<<endl;
        // if(d%(n)==0) cout<<"0\n";
        // cout<<min(abs(d%n-n),d%n)<<"\n";
        int ans=abs(d);
        if(d>0)
        {
             while(d>0)
             {
                d-=n;
                ans=min(ans,abs(d));
             }
             cout<<ans<<endl;
        }
        else if(d==0)
        {
              cout<<0<<endl;
        }
        else
        {
             while(d<0)
             {
                 d+=n;
                 ans=min(ans,abs(d));
             }
              cout<<ans<<endl;
        }
    }
}