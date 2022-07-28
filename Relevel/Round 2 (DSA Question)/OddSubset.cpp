#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
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
        if(d%(n)==0) cout<<"0\n";
        else cout<<min(abs(d%n-n),d%n)<<"\n";
    }
}