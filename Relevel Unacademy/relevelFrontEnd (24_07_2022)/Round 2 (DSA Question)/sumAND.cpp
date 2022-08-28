// Q2 sumAND
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int result=0;
    unordered_map<int,bool> mp;
    for(int i=0;i<n;i++){
        mp[i]=true;
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if((a[i]&a[j]==(a[i]+a[j])/2) && mp[i] && mp[j]){
                result++;
                mp[i]=false;
                mp[j]=false;
                break;
            }
        }
    }
    cout<<result;
    return 0;
}

//     // for(int i=0;i<n;i++){
//     //     for(int j=i+1;j<n;j++){
//     //         if(a[i]&a[j]==(a[i]+a[j])/2){
//     //             result++;
//     //             break;
//     //         }
//     //     }
//     // }
//     cout<<result;
//     return 0;
// }