#include<bits/stdc++.h>
using namespace std;
int solve(int n)
{
    if(n==0)
    return 0;
    if(n==1)
    return 0;
    float rec=n;
    return (solve(ceil(rec/3.0))+1);
}
int main()
{
int n;
cout<<"Enter the number of coins:-\n";
cin>>n;
cout<<"Minimum Number of weighing required:-\n";
cout<<solve(n)<<endl;
}