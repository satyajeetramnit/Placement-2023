#include<bits/stdc++.h>
using namespace std;

bool isPerfectSquare(int n){
    if (ceil((double)sqrt(n)) == floor((double)sqrt(n))) {
        return true;
    }
    else{
        return false;
    }
}
 
int countCustomers(vector<int> bill) {
    int ans = 0;
    for(int i=0;i<bill.size();i++)
        if(!isPerfectSquare(bill[i])) 
            ans++;

    return ans;
}

int main(){
    int n;
    cin>>n;
    vector<int> bill(n);
    for(int i=0;i<n;i++)
        cin>>bill[i];
    cout<<countCustomers(bill);
    return 0;
}