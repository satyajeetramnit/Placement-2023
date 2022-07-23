// Problem Description : Longest Special Subsequences
// You are given a string S of the length n consisting of only lowercase alphabets. If the two consecutive characters in a subsequence have a difference that is no more than k, then it is called a Special Subsequence. Find the length of the longest special subsequence.

// INPUT FORMAT :

// Two space separated integers n and k
// String S
// OUTPUT FORMAT :
// Print the length of the longest special subsequence in a new line.

// CONSTRAINTS :
// 1<= n <= (10^5)
// 1<=k<=26

// Sample Input :
// 7 2
// afcbedf

// Sample Output :
// 4

// Explaination :
// One of the longest special subsequence present in afcbedf is a,c,b,d. It is special because |a-c|<=2 , |c-b|<=2 and |b-d|<=2.

#include <bits/stdc++.h>
using namespace std;

int longest_special_subseq(int n, int k, string s)
{
    vector<int> dp(n, 0);
    int max_length[26] = {0};

    for (int i = 0; i < n; i++)
    {
        int curr = s[i] - 'a';
        int lower = max(0, curr - k);
        int upper = min(25, curr + k);
        for (int j = lower; j < upper + 1; j++)
        {
            dp[i] = max(dp[i], max_length[j] + 1);
        }
        max_length[curr] = max(dp[i], max_length[curr]);
    }

    int ans = 0;
    for (int i : dp)
        ans = max(i, ans);
    return ans;
}

int main()
{
    int t, n, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        string s;
        cin >> s;
        cout << longest_special_subseq(n, k, s) << endl;
    }
}

// Sample Input:
// 1
// 7 2 afcbedg

// Sample Output:
// 4


// Method 2:
#include <bits/stdc++.h>
using namespace std;

int longestSubSeq(string str, int k)
{
    int maxx = 0;
    int temp = 0;

    for (int i = 0; i < str.length() - 1; i++)
    {
        if ((int(str[i + 1]) - int(str[i])) <= k)
        {
            temp++;
            maxx = max(temp, maxx);
        }
        else
        {
            temp = 0;
        }
    }
    cout << "longest substring = " << maxx + 1;
    return maxx;
}

int main()
{
    longestSubSeq("afcbedf", 2);
    return 0;
}