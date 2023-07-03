#include<bits/stdc++.h>
using namespace std;

int dist(char a, char b){
    char x = max(a,b);
    char y = min(a,b);

    int ans = x-y;
    ans = min(ans, 26-ans);

    return ans;
}

string getSmallestString(string s, int k){
    int n = s.size();
    string ans = "";

    for(int i=0; i<n; i++){
        if(dist(s[i], 'a')<=k){
            ans += 'a';
            k -= s[i] - 'a';
        }
        else{
            int o1 = s[i] - k;

            int a1 =INT_MAX;
            int a2 =INT_MAX;
            int a3 =INT_MAX;

            if(o1 >= 'a' and o1 <= 'z'){
                a1 = (char)o1;
            }
        }
    }
}