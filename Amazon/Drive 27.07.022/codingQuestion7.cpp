#include<bits/stdc++.h>
using namespace std;

int minimizeMemory(vector<int> processes, int m) {
    int n = processes.size();
    if(m>n) return 0;
    int sub=0,sum=0;
    for(int i=0;i<n;i++) sum+=processes[i];
    for(int i=0;i<m;i++) sub+=processes[i];
    int ans=sum-sub;
    for(int i=m;i<n;i++){
        sub-=processes[i-m];
        sub+=processes[i];
        ans=min(ans,sum-sub);
    }
    return ans;
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << minimizeMemory(arr,3) << endl;
    return 0;
}