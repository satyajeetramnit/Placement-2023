// You are given two arrays A and B consisting of N integers each
// Index K is named fair if the four sums (A[0] + ... + A[K-1]), (A[k] + ... + A[N-1]), (B[0] + ... + B[k-1]) and (B[K] + ... + B[N-1]) are all equal. In other words, K is the index where the two arrays, A and B, can be split (into two non-empty arrays each) in such a way that the sums of the resulting arrays' elements are equal.

// For example, given arrays A = [0,4,-1,0,3] and B = [0,-2, 5, 0, 3], index k = 3 is fair.
// The sums of the four subarrays are all equal: 0 + 4 + (- 1) = 3; 0 + 3 = 3; 0 + (- 2) + 5 = 3 and 0 + 3 = 3. On the other hand, index overline K = 2 is not fair. the sums of the subarrays are: 0 + 4 = 4; (- 1) + 0 + 3 = 2; 0 + (-2) = -2 and 5 + 0 + 3 = 8

// Write a function:

// class Solution ( public int solution(int[], int[] ); 

// which given two arrays of integers A and B, returns the total number of fair indexes.

// Examples:

// 1. Given A = [0, 4, - 1, 0, 3] and B = [0, -2, 5, 0, 3] your function should return 2. The fair indexes are 3 and 4 in both cases, the sums of elements of the subarrays are equal to 3.
// 2. Given A = (2, - 2, - 3, 3) and B = [0, 0, 4, - 4] your function should return 1. The only fair index is 2 Index 4 is not fair as the subarrays containing indexes from K to N - 1 would be empty
// 3. Given A = [4, - 1, 0, 3] and B=[ -2, 6, 0, 4 ] your function should return 0 There are no fair indexes.
// 4. Given A = [3, 2, 6] and B = [4, 1, 6] your function should return 0.
// 5. Given A = [1, 4, 2, - 2, 5] B = [7, -2, -2, 2, 5] your function should return 2. The fair indexes are 2 and 4.


#include<bits/stdc++.h>
using namespace std;

int solution(vector<int> &A, vector<int> &B){
    for(int i=1; i<A.size(); i++){
        A[i]+=A[i-1];
        B[i]+=B[i-1];
    }
    
    int fair=0;
    int lA, rA, lB, rB;
    for(int k=1; k<A.size(); k++){
        lA=A[k-1];
        rA=A[A.size()-1]-A[k-1];
        
        lB=B[k-1];
        rB=B[B.size()-1]-B[k-1];
        
        fair+=int(lA==rA && rA==lB && lB==rB);
    }
    return fair;
}

int main(){
    vector<int> A = {1, 4, 2, -2, 5};
    vector<int> B = {7, -2, -2, 2, 5};
    cout<<solution(A,B);
    return 0;
}