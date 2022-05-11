#include<bits/stdc++.h>
#ifdef LOCAL
#include "debug.hpp"
#else
#define debug(...) void(0);
#endif
using namespace std;
#define int long long

int find(int n,int dp[],int fac){
    if(n==0){
        return 1;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    int ans=0;
    for(int i=1;i<fac+1;i++){
        if(n-i>=0) ans+=(int)(find(n-i,dp,fac));
    }
    dp[n]=ans;
    return ans;
}

void solve() {
// 	int s, n;
// 	cin >> s >> n;
// 	vector<int> dp(s + 1);
// 	dp[0] = 1;
// 	for (int i = 1; i <= s; ++i) {
// 		for (int j = 1; j <= n ; ++j) {
// 			if (i - j >= 0) {
// 				dp[i] += dp[i - j];
// 			}
// 		}
// 	}
// 	cout << dp[s] << "\n";
    int n,fac;
    cin>>n>>fac;
    int dp[n+1];
    for(int i=0;i<n+1;i++){
        dp[i]=-1;
    }
    int ans=find(n,dp,fac);
    cout<<ans<<"\n";
}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n; cin >> n; while (n--) solve(); return 0;
}