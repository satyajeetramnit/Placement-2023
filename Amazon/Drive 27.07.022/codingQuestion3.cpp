#include<bits/stdc++.h>
using namespace std;

long getMaxAggregateTemperatureChange(vector<int> tempChange) {
    int n=tempChange.size();
    long maxi=LONG_MIN;
    vector<long> l(n);
    for(int i=0;i<n;i++){
        l[i]=0;
    }
    vector<long> r(n);
    for(int i=0;i<n;i++){
        r[i]=0;
    }
    l[0]=tempChange[0];
    r[n-1]=tempChange[n-1];
    for(int i=1;i<n;i++) l[i]=l[i-1]+tempChange[i];
    for(int i=n-2;i>=0;i--) r[i]=r[i+1]+tempChange[i];
    for(int i=0;i<n;i++){
        if(maxi<max(r[i],l[i])){
            maxi=max(r[i],l[i]);
        }
    }
    return maxi;
}

int main(){
    int n;
    cin >> n;
    vector<int> tempChange(n);
    for (int i = 0; i < n; i++) {
        cin >> tempChange[i];
    }
    cout << getMaxAggregateTemperatureChange(tempChange) << endl;
    return 0;
}