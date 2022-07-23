// Slots

// You are given an array A of N non-negative integers. There are K empty slots from 1 to K. 
// You have to arrange these N numbers Into K slots (2 K>= M). Each slot can contain at most two numbers filled into it. 
// After all the integers have been placed into these slots. find the sum of Bitwise AND of all the numbers with their respective slot number.

// Task

// Determine the maximum sum possible.

// Notes

// • Some slots may remain empty.
// • The bitwise AND operator (&) compares each bit of the first operend to the corresponding bit of the second operand. 
//   If both bits are 1, the corresponding result bit is set to 1 Otherwise, the corresponding result bit is set to 0.

#include<bits/stdc++.h>
using namespace std;

int MaxSum(int N, int K, vector<int> A){
    int mask = pow(3, K) - 1;
    vector<int> memo(mask + 1, 0);

    function<int(int, int)> dp = [&](int i, int mask) {
        int& res = memo[mask];
        if (res > 0) return res;
        if (i < 0) return 0;
        for (int slot = 1, bit = 1; slot <= K; ++slot, bit *= 3)
            if (mask / bit % 3 > 0)
                res = max(res, (A[i] & slot) + dp(i - 1, mask - bit));
        return res;
    };

    return dp(A.size() - 1, mask);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    for(int t_i = 0; t_i < T; t_i++){
        int N, K;
        cin >> N >> K;
        vector<int> A(N);
        for(int a_i = 0; a_i < N; a_i++){
            cin >> A[a_i];
        }
        cout << MaxSum(N, K, A) << endl;
    }
    return 0;
}

// in python3
// from scipy.optimize import linear_sum_assignment as LA

// def maximumANDSum(n,t,nums):
//     cost = [[-(x&y) for y in list(range(1, t+1)) * 2] for x in nums + [0]*(2*t - len(nums))]
//     return -sum(cost[r][c] for r, c in zip(*LA(cost)))