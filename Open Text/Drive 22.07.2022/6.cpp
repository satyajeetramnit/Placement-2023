// Minimum number of Characteres to be removed to sort the string

#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;

int solution(string s){
    for(int i=0;i<s.length();i++){
        if(s[i]=='A'){
            s[i]='0';
        }
        else if(s[i]=='B'){
            s[i]='1';
        }
    }
    int n = s.length();

	vector<int> dp(n + 1, 0);
	int count1 = 0;

	for (int i = 0; i < n; i++) {
		if (s[i] == '0') {
			dp[i + 1] = min(count1, 1 + dp[i]);
		}
		else {
            dp[i + 1] = dp[i];
			count1++;
		}
	}
	return dp[n];
}

int main(){
    string s;
    cin>>s;
    cout<<solution(s);
    return 0;
}