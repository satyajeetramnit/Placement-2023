// You have a bag which initially has a coin of value N,
// in one move you can perform one of the following operations:
// 1. choose any coin "X" currently in the bag and split that into three coins of value X/2, X/3 and X/4 (rounding down to the nearest integer)
// 2. add the three coins created after splitting to the bag
// 3. remove the coin "X" from the bag

// you are allowed to perform any number of moves(possibily zero)
// Find the maximum possible sum of values of coins that you can have in the bag after performing any number of moves

#include <bits/stdc++.h>
using namespace std;

string trim(string);

long maxCoinsUtil(long N, unordered_map<long, long> &dp) {

    if(dp.find(N) != dp.end()) {
        return dp[N];
    }

    if (N < 12) {
        return N;
    } else {
        return dp[N] = maxCoinsUtil(N / 2, dp) + maxCoinsUtil(N / 3, dp) + maxCoinsUtil(N / 4, dp);
    }
}

long maxCoins(long N) {
    unordered_map<long, long> dp;
    return maxCoinsUtil(N, dp);  
}

// In python
// def maxCoins(n):
//     dp = {}
//     def maxCoinsUtil(n):
//         if n in dp:
//             return dp[n]
//         if n < 12:
//             return n
//         else:
//             dp[n] = maxCoinsUtil(n//2) + maxCoinsUtil(n//3) + maxCoinsUtil(n//4)
//             return dp[n]
//     return maxCoinsUtil(n)

int main() {
    string N;
    getline(cin, N);
    cout << maxCoins(stol(trim(N))) << endl;
    return 0;
}

string trim(string str) {
    str.erase(0, str.find_first_not_of(' '));
    str.erase(str.find_last_not_of(' ') + 1);
    return str;
}
