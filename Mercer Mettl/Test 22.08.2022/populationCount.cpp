// Population Count

// Description: The population count is the number of 1s (ones) in the binary representation of a non-negative integer.
// Population count is also known as pop count, popcount, sideways sum, and Hamming weight.

// Take the number from the user and display its Population Count.

// For example:
// 5 -> 101 -> 2
// 65 -> 10001 -> 6

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int count=0;
    while(n>0){
        if(n&1){
            count++;
        }
        n>>=1;
    }
    cout<<count<<endl;
    return 0;
}

// Explain Approach
// 1. Take the number from the user and display its Population Count.
// 2. Then we will use the bitwise operator to count the number of 1s in the binary representation of the number.
// 3. We will use the bitwise operator to count the number of 1s in the binary representation of the number.
// 4. finally, we will display the count.