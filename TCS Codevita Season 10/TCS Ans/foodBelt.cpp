#include<bits/stdc++.h>
#ifdef LOCAL
#include "debug.hpp"
#else
#define debug(...) void(0);
#endif
using namespace std;
#define int long long

void transform(vector<string> &v,vector<vector<string>> belt,int n,int m){
    for (int i = 0; i < m; i++){
        if (i & 1)
            for (int j = n - 1; j >= 0; j--) v.push_back(belt[i][j]);
        else
            for (int j = 0; j < n; j++) v.push_back(belt[i][j]);
    }
}

vector<string> rotation(vector<string> vect,int r,int m,int n){
    r%=m*n;
    
    int i=m*n-r, j=m*n-1;
    while(i<j) swap(vect[i++], vect[j--]);
    
    i=0, j=m*n-r-1;
    while (i<j) swap(vect[i++], vect[j--]);
    
    i=0,j=m*n-1;
    while (i < j) swap(vect[i++], vect[j--]);

    return vect;
}

tuple<int, int> display(vector<string> vect,int n,int m,string ask){
    tuple<int,int> loc(-1,-1);
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            int cord = i * n + (i & 1 ? n - 1 - j : j);
            if (vect[cord] == ask){
                get<0>(loc) = cord / n;
                get<1>(loc) = (i & 1) ? n - 1 - cord % n : (cord % n);
            }
            cout<<vect[cord]<<" ";
        }
        cout<<"\n";
    }
    return loc;
}

void solve() {
    int m,n,r;
    cin>>m>>n;
    string ask;
    vector<vector<string>> matrix(m, vector<string>(n));
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> matrix[i][j];

    cin>>r>>ask;
    vector<string> v;
    transform(v, matrix, n, m);

    v = rotation(v, r, m, n);

    tuple<int, int> loc(-1,-1);
    //cout<<get<0>(loc)<<" "<<get<1>(loc)<<"\n";
    loc = display(v, n, m, ask);
    //cout<<get<0>(loc)<<" "<<get<1>(loc)<<"\n";

    if (get<0>(loc) == -1 && get<1>(loc) == -1){
        cout<< "Not Available";
    }
    else
        cout<<"["<<get<0>(loc)<<", "<<get<1>(loc)<<"]";
}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	solve(); 
    return 0;
}