#include<bits/stdc++.h>
#ifdef LOCAL
#include "debug.hpp"
#else
#define debug(...) void(0);
#endif
using namespace std;
#define int long long

void solve(){
    string input,action;
    cin>>input;
    cin>>action;
    int n=input.size();
    int m=action.size();
    int ptr=0;
    for(int i=0;i<m;i++){
        if(action[i]=='R'){
            if(ptr+1<n) ptr++;
        }
        else if(action[i]=='L'){
            if(ptr>0) ptr--;
        }
        else if(action[i]=='T'){
            if(input[ptr]!='9') input[ptr]++;
            //else{
            //    input[ptr]='0';
            //    if(ptr-1>0) input[ptr-1]++;
            //}
        }
        else if(action[i]=='D'){
            if(input[ptr]!='0') input[ptr]--;
            //else{
            //    input[ptr]='9';
            //    if(ptr-1>=0) input[ptr-1]--;
            //}
        }
        else if(action[i]=='S'){
            //cout<<input[ptr]<<" "<<input[(int)(action[i+1])-48-1]<<"\n";
            //if(action[i] >= '0' && action[i] <= '9') swap(input[ptr],input[(int)(action[i+1])-48-1]);
            //i++;
            
            i++;
            string num;
            for (i;i<m && action[i]>='0' && action[i]<='9';i++){
                num.push_back(action[i]);
                }
            i--;
            int ind = stoi(num);
            swap(input[ptr], input[ind - 1]);
        }
    }
    cout<<input<<"\n";
}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    solve();
    return 0;
}