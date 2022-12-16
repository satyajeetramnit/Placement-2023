#include<bits/stdc++.h>
using namespace std;

int memServer1(vector<int> req){
    int n=req.size();
    if(n%2==0) return n/2;
    else return (n/2)+1;
}

int main(){
    vector<int> req={1,2,3,4,5,6,7};
    cout<<memServer1(req);
    return 0;
}