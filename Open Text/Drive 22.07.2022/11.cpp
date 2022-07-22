// Write a function:
// class Solution { public boolean solution(int[] x); }
// that, given an array A of Nintegers, returns true if A contains at least two elements which differ by 1, and false otherwise.
// Examples:
// 1. Given A = [7], the function should return false.
// 2. Given A = [4, 3), the function should return true.
// 3. Given A = [11, 1,8,12,14), the function should return true. Pair of elements which differ by 1 is (11, 12). 4. Given A = [4, 10, 8,5, 9), the function should return true. Pairs of elements which differ by 1 are (4, 5), (10,9) and (8,9).
// 5. Given A = [5,5,5,5,5), the function should return false, There are no two elements in A whose values differ by 1.

#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;

bool solution(vector<int> &A){
    int n=A.size();
    if(n<2) return false;
    sort(A.begin(),A.end());
    for(int i=0;i<n-1;i++){
        if(abs(A[i]-A[i+1])==1) return true;
    }
    return false;
}
// same function in java
// public boolean solution(int[] A) {
//     int n=A.length;
//     if(n<2) return false;
//     Arrays.sort(A);
//     for(int i=0;i<n-1;i++){
//         if(Math.abs(A[i]-A[i+1])==1) return true;
//     }
//     return false;
// }

int main(){
    vector<int> A;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        A.push_back(x);
    }
    cout<<solution(A);
    return 0;
}