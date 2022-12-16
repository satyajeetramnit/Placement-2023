#include<bits/stdc++.h>
using namespace std;
vector<int>adj[1000001];
void solve(int src,int dest,unordered_map<int,int>&mp){
	mp[src]=1;
	for(int i=0;i<adj[src].size();++i){
		if(!mp[adj[src][i]]){
			solve(adj[src][i],dest,mp);
		}
	}
}

int main(){
	int n;
	cin>>n;
	unordered_map<int,int>mp;
	for(int i=0;i<n;++i){
		int x;
		cin>>x;
		mp[x]=0;
	}
	int e;
	cin>>e;

	for(int i=0;i<e;++i){
		int x,y;
		cin>>x>>y;
		adj[x].push_back(y);
	}
	int src,dest;
	cin>>src>>dest;
	solve(src,dest,mp);
	cout<<mp[dest]<<endl;
	return 0;	
}

// same code as above in python:

def solve(src,dest,mp):
    mp[src]=1
    for i in adj[src]:
        if(mp[i]==0):
            solve(i,dest,mp)

n=int(input())
mp={}
for i in range(n):
    x=int(input())
    mp[x]=0
e=int(input())
for i in range(e):
    x,y=map(int,input().split())
    adj[x].append(y)
src,dest=map(int,input().split())
solve(src,dest,mp)
print(mp[dest])
