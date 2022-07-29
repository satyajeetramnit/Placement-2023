// Q1
#include<iostream>
using namespace std;

void solution_function(){
    int l;
    cin>>l;
    int res=0;
    for(int i=l;i>=2;i--){
        if(l%i==0){
            res+=i;
        }
    }
    cout<<res<<endl;
}

int main(){
    solution_function();
    return 0;
}

// Q2
#include<bits/stdc++.h>
using namespace std;

void solution_function() {

	int n;
	cin >> n;

	int ans = 0;

	vector<int> ax, ay, bx, by;
	int a, b, c;

	for (int i = 0; i < n; i++) {
		cin >> a >> b >> c;
		if (c) {
			bx.push_back(a);
			by.push_back(b);
		}
		else {
			ax.push_back(a);
			ay.push_back(b);
		}
	}

	int al = ax.size();
	int bl = bx.size();

	for (int i = 0; i < al; i++) {
		for (int j = 0; j < bl; j++) {
			int dist = ((ax[i] - bx[j]) * (ax[i] - bx[j])) + ((ay[i] - by[j]) * (ay[i] - by[j]));
			dist = sqrt(dist);

			ans = max(ans, dist);
		}
	}
	cout << ans << endl;
}

int main(){
    solution_function();
    return 0;
}