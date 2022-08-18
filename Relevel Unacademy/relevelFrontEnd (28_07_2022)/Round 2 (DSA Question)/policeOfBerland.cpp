// Q2 Police of Berland
// Question Name: Police Or Berland

// Problem Statement
// Today is Christmas eve and the citizens of Berland are in a mood to party But not every citizen can party because some of them are engineers and they have to go to work the next morning.
// The city of Berland has N houses lined in a row from 1 to N. You are given an array A ITA is 1, then an engineer lives in the Phouse, eise A is 0, then a non-engineer lives in the h house.
// All non-engineers are playing Christmas songs in high volume. An engineer in the house can't sleep if both of its neighbours are non-engineers and are playing songs. More specifically if 1<<N, A_{1} = 0 A_{i} = 1 A, 1 = 0, 
// then the engineer in the house can't sleep because of loud music. The city of Berland cares for its engineers as they are the building blocks of a nation. So they want their engineers to sleep well on Christmas eve and come to work the next monring.
// For this, the police department of Bernand has got the task to some of the citzens from playing music. But the police wants to bother as few citizens as possible and has come to you for help.

// Given array A print the minimum number of citizens whom the police must intervene from playing music so that none of the engineers is disturbed.


// Q2 C++
#include <iostream>
using namespace std;

int main() {
	int n; cin>>n;
	int a[n];
	int ans=0;
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n-1;i++){
		if(a[i-1]==0 && a[i+1]==0 && a[i]==1){
			a[i+1]=1;
			ans++;
		}
	}
	cout<<ans;
	return 0;
}

// Q2 Python

// n=int(input())
// a=list(map(int,input().split()))
// ans=0
// for i in range(n-1):
//     if a[i-1]==0 and a[i+1]==0 and a[i]==1:
//         a[i+1]=1
//         ans+=1
// print(ans)