#include<bits/stdc++.h>
#ifdef LOCAL
#include "debug.hpp"
#else
#define debug(...) void(0);
#endif
using namespace std;
#define int long long

void solve(){
    int n;
    cin>>n;
    int dis;
    string dir;
    cin>>dis>>dir;
    vector<int> force(n);
    for(int i=0;i<n;i++) cin>>force[i];
    
    int initial;
    if (dir=="Right") initial=dis;
    else initial=-dis;
    
    bool zero=false;
    if(dis==0) zero=true;
    
    for(int i=0;i<n;i++){
        if(initial<0) initial+=force[i];
        else initial-=force[i];

        if(initial==0){
            zero=true;
            break;
        }
    }
    
    if(zero) cout<<"Possible\n";
    else cout<<"Not Possible\n";
}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    solve();
    return 0;
}