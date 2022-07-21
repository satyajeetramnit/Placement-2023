#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;

int sumDigits(int n){
    int sum=0;
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    return sum;
}

int solution(vector<int> &A){
    int n=A.size();
    vector<int> sum(n+1,0);
    for(int i=0;i<n;i++){
        sum[i]=sumDigits(A[i]);
    }
    vector<pair<int,int>> same;
    // elements with same value
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(sum[i]==sum[j]){
                same.push_back(make_pair(i,j));
            }
        }
    }
    if(same.size()==0){
        return -1;
    }
    int max_sum=0;
    for(int i=0;i<same.size();i++){
        int sum=A[same[i].first]+A[same[i].second];
        if(sum>max_sum){
            max_sum=sum;
        }
    }
    return max_sum;
}
int main(){
    int n;
    cin>>n;
    vector<int> A(n);
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    cout<<solution(A);
    return 0;
}