// You are given an array of integers. Your task is to create pairs of them, such that every pair consists of equal numbers. Each array element may belong to one pair only. Is it possible to use all of the integers? Write a function:
// bool solution(vector<int> &A);
// that, given an array A consisting of N integers, returns whether it is possible to split all integers into pairs. 
// Examples: 
// 1. Given A = [1, 2, 2, 11]. your function should return True, as the pairs are (AO). A[3]) (both have value 1) and (A[1]. A[2]) (both have value 2). 
// 2. Given A = [17, 7, 71], your function should return False, as you can make one pair of numbers 7, but you still have a single 7 left.
// 3. Given A = [1,2,2,3], your function should return False, as there's nothing that A[0] can be paired with
// Write an efficient algorithm for the following assumptions:
// • N is an integer within the range (1..100,000); 
// • each element of array A is an integer within the range
// [(]-1,000,000..1,000,000]

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