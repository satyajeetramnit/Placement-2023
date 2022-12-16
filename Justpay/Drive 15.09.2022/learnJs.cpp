#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>>adj[1000001];

int main(){
	int n;
	cin>>n;
	unordered_map<int,int>mp;
	for(int i=0;i<n;++i){
		int x;
		cin>>x;
		mp[x]=INT_MAX;
	}
	int e;
	cin>>e;
	for(int i=0;i<e;++i){
		int x,y,d;
		cin>>x>>y>>d;
		adj[x].push_back({y,d});
	}
	int src,dest;
	cin>>src>>dest;
	set<pair<int,int>>s;
	mp[src]=0;
	s.insert({0,src});
	while(!s.empty()){
	    pair<int,int>tmp=*(s.begin());
	    s.erase(s.begin());
	    int u=tmp.second;
	    for(auto i=adj[u].begin();i!=adj[u].end();++i){
	        int v=(*i).first;
	        int weight=(*i).second;
	        if(mp[v]>mp[u]+weight){
	            if(mp[v]!=INT_MAX)
	                s.erase(s.find({mp[v],v}));
	            mp[v]=mp[u]+weight;
	            s.insert({mp[v],v});
	        }
	    }
	}
	if(mp[dest]==INT_MAX)
	    cout<<"-1"<<endl;
	else
	    cout<<mp[dest]<<endl;
	return 0;
}

// same code as above in python:

def solve(src,dest,mp):
    mp[src]=0
    s=set()
    s.add((0,src))
    while(len(s)!=0):
        tmp=s.pop()
        u=tmp[1]
        for i in adj[u]:
            v=i[0]
            weight=i[1]
            if(mp[v]>mp[u]+weight):
                if(mp[v]!=float('inf')):
                    s.remove((mp[v],v))
                mp[v]=mp[u]+weight
                s.add((mp[v],v))

n=int(input())
mp={}
for i in range(n):
    x=int(input())
    mp[x]=float('inf')
e=int(input())
for i in range(e):
    x,y,d=map(int,input().split())
    adj[x].append((y,d))
src,dest=map(int,input().split())
solve(src,dest,mp)
if(mp[dest]==float('inf')):
    print("-1")
else:
    print(mp[dest])