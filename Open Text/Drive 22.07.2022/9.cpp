#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;

int solution(vector<int> &A){
    // int zero=count(A.begin(),A.end(),0);
    // int one=count(A.begin(),A.end(),1);
    int zero=0;
    int one=0;
    for(int i=0;i<A.size();i++){
        if(A[i]==0){
            zero++;
        }
        else{
            one++;
        }
    }
    return abs(zero-one)/2;
}

int main(){
    vector<int> A={0,0,0,0};
    cout<<solution(A);
    return 0;
}