// There are N coins, each showing either heads or tails. We would like the
// number of coins showing heads to be equal to the number showing tails.
// What is the minimum number of coins that must be turned over?
// Write a function:
// int solution (vector<int> &A);
// that, given an array A consisting of N integers representing the coins, returns
// the minimum number of coins that must be flipped. Consecutive elements of
// array A represent consecutive coins, and contain either a 0 (heads) or a 1
// (tails).
// Examples:
// 1. Given array A = [1, 0, 0, 1, 0, 0], there are four coins showing heads and two
// showing tails. The function should return 1, as after reversing one of the
// coins showing heads, there will be three coins showing heads and three
// showing tails.
// 2. Given array A = [1, 1, 0, 1], the function should return 1, as after reversing
// one of the coins showing tails, there will be two coins showing heads and
// two showing tails.
// 3. Given array A = [0, 0, 0, 0], the function should return 2, as after reversing
// two of the coins showing heads, there will be two coins showing heads and
// two showing tails.

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