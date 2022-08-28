// Q1 Increase Score

#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n,m,k;
    cin>>n>>m>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int student=a[k-1];
    sort(a,a+n);
    int median=a[((n+1)/2)-1];
    if(student<=median){
        cout<<median;
    }
    else{
        cout<<m;
    }
    return 0;
}
