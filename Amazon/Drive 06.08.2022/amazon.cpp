// #include<stdio.h>
// #include<string.h>
#include<bits/stdc++.h>
using namespace std;

int maxGroup(int input1,int input2[]){
    // int y,res=0;
    // unordered_map<int,int> mp;
    // for(int i=0;i<input1;i++){
    //     mp[input2[i]]++;
    // }
    // for(auto x:mp){
    //     y=x.second;
    //     res+=y/2;
    // }
    // return res;

    int res=0;
    unordered_map<int,int> mp;
    for(int i=0;i<input1;i++){
        mp[input2[i]]++;
        if(mp[input2[i]]==2){
            res++;
            mp.clear();
        }
    }
    return res;
}

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<maxGroup(n,arr);
//     return 0;
// }

int main(){
    // int x=1,y=1;
    // while(x<=20){
    //     y=x*5;
    //     cout<<y<<" ";
    //     x++;
    // }
    int tot,numb,numg,bp;
    bp=10;
    cin>>numb;
    tot=(numb*100)/bp;
    numg=(tot*(100-bp-1))/100;
    cout<<"total number of pupils:"<<tot<<"\n";
    cout<<"number of girls"<<numg<<"\n";
}