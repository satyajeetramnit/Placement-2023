// Two integers A and B are given. We are interested in positions at which the decimal representation of A occurs as a substring in the decimal representation of B (counting from 0). For example:
    // • 53 occurs in 1953786 at position 
    // • 78 occurs in 195378678 at positions 4 and 7.
    // • 57 does not occur in 153786.

// Decimal representations are assumed to be big-endian and without leading zeros (the only exception being the number 0, whose decimal representation is "e").

// Write a function
// class Solution (public int solution(int A, int 8); 1

// that, given two integers A and B, returns the leftmost position at which A occurs in B. The function should return -1 if A does not occur in B.

// For example, given A = 53 and B = 1953786, the function should return 2, as
// explained above.

// Assume that:

// A and B are integers within the range [0..999,999,999].
// In your solution, focus on correctness. The performance of your solution will not be the focus of the assessment.

#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;

int solution(int A,int B){
    int pos=-1;
    string str1=to_string(A);
    string str2=to_string(B);
    pos=str2.find(str1);
    return pos;
}

int main(){
    int A,B;
    cin>>A>>B;
    cout<<solution(A,B);
    return 0;
}