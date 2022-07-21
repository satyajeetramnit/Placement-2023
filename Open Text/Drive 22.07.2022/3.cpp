#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;

bool solution(vector<int> &A){
    if(A.size()<2){
        return false;
    }
    int res=A[0];
    for(int i=1;i<A.size();i++){
        res^=A[i];
    }
    if(res==0){
        return true;
    }
    else false;
}

int main(){
    int n;
    cin>>n;
    vector<int> A(n);
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    if(solution(A)){
        cout<<"YES";
    }
    else cout<<"NO";
}