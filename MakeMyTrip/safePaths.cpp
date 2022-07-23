// Problem Description - SAFE PATHS
// There are n cities numbered from 1 to n and there are n-1 bidirectional roads such that all cities are connected . There are k trees, each one is in a different city. You are currently in the 1st city. You want to visit city X, such that neither X nor the the cities in the path from 1 to X has a tree. Find out how many such X can you visit (X != 1).

// INPUT FORMAT :
// First line contains two space separted integers n , k representing the number of cities and the number of trees respectively.
// Next n-1 lines : Two integers ui and vi meaning there is a road between cities ui and vi.
// Next line : k integers p1,p2,p3....pk where there is a tree at pi city.

// OUTPUT FORMAT :
// Print a single integer denoting the number of cities you can visit.

// Input Constraints :

// 1<=n<=10^5
// 0<=k<n
// 1<=ui,vi<=n; ui != vi
// 2<=pi<=n

// Sample Input :
// 6 3
// 1 2
// 1 6
// 2 3
// 2 4
// 2 5
// 2 3 4

// Sample Output :
// 1

// Explaination :
// There are total 5 possiblities :

// 1 -> 2
// 1 -> 2 -> 3
// 1 -> 2 -> 4
// 1 -> 2 -> 5
// 1 -> 6
// In the first 4 cases , the second city has a tree, so he can't go to 2nd , 3rd , 4th and 5th city. But in 5th case, none of the city on the simple path has a theif so he can go to 6th city.

// Working Solution :

// The idea is to visit those cities from 1 that don't have a tree by doing a BFS or a DFS.
// Here is a working CPP code that uses a BFS based traversal approach.


#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,k;
	cin>>n>>k;
	vector<int> adj[n+1];
	for(int i=0;i<n-1;i++){
		int a,b;
		cin>>a>>b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	vector<int> vis(n+1);
	vector<int> A(k);
	for(int i=0;i<k;i++)
		cin>>A[k], vis[A[k]] = 1;
	if(vis[1]==1){
		cout << 0 << endl;
		return 0;
	}
	queue<int> q;
	q.push(1);
	vis[1] = 1;
	int ans = 0;
	while(!q.empty()){
		int f = q.front();
		q.pop();
		for(auto itr:adj[f]){
			if(vis[itr]==0){
				vis[itr] = 1;
				ans++;
				q.push(itr);
			}
		}
	}
	cout << ans << endl;
}

// int solution(vector<int> thieves,vector<vector<int>> edges){
//     int n = thieves.size();
//     vector<int> adj[n+1];
//     for(int i=0;i<n-1;i++){
//         int a = edges[i][0];
//         int b = edges[i][1];
//         adj[a].push_back(b);
//         adj[b].push_back(a);
//     }
//     vector<int> vis(n+1);
//     vector<int> A(thieves.begin(),thieves.end());
//     for(int i=0;i<thieves.size();i++)
//         vis[thieves[i]] = 1;
//     if(vis[1]==1){
//         return 0;
//     }
//     queue<int> q;
//     q.push(1);
//     vis[1] = 1;
//     int ans = 0;
//     while(!q.empty()){
//         int f = q.front();
//         q.pop();
//         for(auto itr:adj[f]){
//             if(vis[itr]==0){
//                 vis[itr] = 1;
//                 ans++;
//                 q.push(itr);
//             }
//         }
//     }
//     return ans;
// }

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(0);
//     int n,k;
//     cin>>n>>k;
//     vector<vector<int> >edges(n-1,vector<int>(2));
//     for(int i_edges=0;i_edges<n-1;i_edges++){
//         for(int j_edges=0;j_edges<2;j_edges++){
//             cin>>edges[i_edges][j_edges];
//         }
//     }
//     vector<int> thieves(k);
//     for(int i_thieves=0;i_thieves<k;i_thieves++){
//         cin>>thieves[i_thieves];
//     }
//     int out_;
//     out_ = solution(thieves,edges);
//     cout<<out_<<endl;
// }