// Q1 UN SPECIAL NUMBERS

// Problem Statement
// You are given an array A of N Integers. You are also given M unspecial integers. 
// You have to tell the longest possible length of a subarray at array A which contains at most K unspecial integers

// Note:
// Each occurence of a unspecial integer is counted separately. 
// See sample test case for more clarity on the question.

// Input:
// 5 2 2
// 1 2 3 2 5
// 3 2

// Output:
// 3


// Q1 Python
// n,m,k=[int(x) for x in input().split()]
// arr=[int(x) for x in input().split()]
// spec=[int(x) for x in input().split()]
// mp={}
// for i in spec:
// 	mp[i]=True
// maxi=0
// count,i,j=0,-1,0
// while i<n:
// 	if count<=k:
// 		if mp[arr[i]]:
// 			count+=1
// 		i+=1
// 	else:
// 		if mp[arr[j]]:
// 			count-=1
// 		j+=1
// 	if count<=k and i<n:
// 		if abs(i-j+1)>maxi:
// 			maxi=abs(i-j+1)
// print(maxi)


// Q1 C++
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m,k;
	cin>>n>>m>>k;
	int a[n],b[m];
	for(int i=0;i<n;i++) cin>>a[i];
	unordered_map<int,bool> mp;
	for(int i=0;i<m;i++) {
		cin>>b[i];
		mp[b[i]]=true;
	}
	int maxi=0,i=-1,j=0,count=0;
	while(i<n){
		if(count<=k){
			i++;
			if(mp[a[i]]) count++;
		}
		else{
			if(mp[a[j]]) count--;
			j++;
		}
		if(count<=k && i<n){
			maxi=max(maxi,abs(i-j+1));
		}
	}
	cout<<maxi;
}

