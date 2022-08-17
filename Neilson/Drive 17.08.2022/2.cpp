// There are two sets of traditional six-faced dice, represented by two arrays A and B consisting of N and M integers respectively. Each array element has a value between 1 and 6, inclusive, representing the value of the corresponding die.

// Write a function:
// class solution ( public int solution(int[] A. int[]);)

// that, given two arrays A and B. returns the minimum number of dice to be turned in order to make the sums of dice in both sets equal, or -1 if this is not possible.

// Examples:
// 1. Given A = [5], B = [1, 1, 6] the function should return 1. We have to turn the third die in B from 6 to 3; then the arrays will have the same sums (5 = 1 + 1 + 3) Test Output
// 2. Given A = [2, 3, 1, 1, 2] B = [5, 4, 6] the function should return 2. We can turn last two dice in B to get [5, 1, 3]; then the arrays will have the same sums.
// 3. Given A = [5, 4, 1, 2, 6, 5] B = [2] the function should return 6. We can turn five dice in A to get [1, 1, 1, 1, 1, 1] and one dice in B to get [6]. then the arrays will have the same sums.
// 4. Given A = [1.2, 3, 4, 3, 2, 1] B = [6] the function should return -1, because it is not possible for the arrays to have the same sums.


#include<bits/stdc++.h>
using namespace std;

int solution(vector<int> &A, vector<int> &B){
    int sum1=0, sum2=0;
    for(int i=0; i<A.size(); i++){
        sum1+=A[i];
    }
    for(int i=0; i<B.size(); i++){
        sum2+=B[i];
    }
    if(sum1>sum2){
        return solution(B,A);
    }
    vector<int>dif;
    int c=0;
    int d=sum2-sum1;
    
    if(d==0){
        return 0;
    }
    
    for(auto i:A) {
        dif.push_back(6-i);
    }
    for(auto i:B){
         dif.push_back(i-1);
    }
        
    sort(dif.begin(),dif.end(),greater<int>());
        
    for(auto i:dif){
        d-=i;
        c++;
        if(d<=0){
            return c;
        }
    }
    return -1;
}

int main(){
    vector<int> A = {5};
    vector<int> B = {1,1,6};
    cout<<solution(A, B);
    return 0;
}