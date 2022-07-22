// Write a function:
// class Solution
// public int solution(int n);
// which, given an integer N, returns the smallest integer that is greater than N and the sum of whose digits is equal to the sum of the digits of N.
// Examples:
// 1. Given N = 28, your function should return 37. The sum of the digits of 28 is equal to 2 + 8 = 10. The subsequent numbers are (with the sum of their digits in brackets): 29 (11), 30 (3), 31 (4). 32 (5), 33 (6), 34 (7), 35 (8) 36 (9) and 37 (10). 37 is the smallest number bigger than 28 whose digits add up to 10. 
// 2. Given N = 734, your function should return 743. The sum of the digits of 734 and 743 are equal 7 + 3 + 4 = 7 + 4 + 3 = 14. No other integer between 735 and 742 adds up to 14. 
// 3. Given N = 1990, your function should return 2089. The sum of the digits of both numbers is equal to 19 and there is no other integer between 1991 and 2088 that adds up to 19.

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

int solution(int N){
    int sum=sumDigits(N);
    int i=N+1;
    while(sum!=sumDigits(i)){
        i++;
    }
    return i;
}

int main(){
    int N;
    cin>>N;
    cout<<solution(N);
    return 0;
}