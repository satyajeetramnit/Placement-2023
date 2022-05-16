// Given an array of integers, determine the number of moves to make all elements equal. Each move consists of choosing all but 1 element and incrementing their values by 1.

#include<bits/stdc++.h>
using namespace std;

int countMoves(vector<int> numbers){
    int len=numbers.size(),total=0,mini=INT_MAX;
    for(int i=0;i<len;i++){
        if(numbers[i]<mini){
            mini=numbers[i];
        }
        total+=numbers[i];
    }
    return (long)(total-mini*len);
}