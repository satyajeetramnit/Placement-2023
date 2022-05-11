#include <bits/stdc++.h>
#ifdef LOCAL
#include "debug.hpp"
#else
#define debug(...) void(0);
#endif
using namespace std;
//#define int long long

int count(string& s, char c) {
    int miss = 0;
    for (int i = 0; i < (int)s.length(); i += 2) {
        if (s[i] != c) miss++;
    }
    return miss;
}

int miniSwaps(string s) {
    int cnt0 = 0, cnt1 = 0;
    for (char c : s) c == '0'? cnt0 += 1 : cnt1 += 1;
    
    if (abs(cnt0 - cnt1) > 1) 
        return -1;
        
    if (cnt0 > cnt1)
        return count(s, '0');
    
    if (cnt0 < cnt1)
        return count(s, '1');
    
    return min(count(s, '0'), count(s, '1'));
}

void solve() {
    string s,bin;
    cin>>s;
    bin="";
    for(int i=0;i<(int)s.length();i++){
        if(s[i]=='G') bin+='0';
        else bin+='1';
    }
    cout<<miniSwaps(bin);
}

int32_t main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	solve(); 
    return 0;
}