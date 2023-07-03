#include<bits/stdc++.h>
using namespace std;

int minDiff(vector<int> arr){
    int n=arr.size();
    sort(arr.begin(),arr.end());
    int sum = 0;
    sum += abs(arr[0] - arr[1]);
    sum += abs(arr[n-1] - arr[n-2]);
    for (int i=1; i<n-1; i++)
        sum += min(abs(arr[i] - arr[i-1]), abs(arr[i] - arr[i+1]));
    return sum;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<minDiff(arr);
    return 0;
}