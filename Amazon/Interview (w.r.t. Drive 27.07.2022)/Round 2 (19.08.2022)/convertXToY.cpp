// You are given two 3 digit integer X & Y. 
// You hve two operations available on any integer
// 1. You can increase any digit by 1 (9 would become 0) 
// 2. you can decrease any digit by 1 (0 would become 9)
// At each step you can only perform any of the operations
// Return minimum number of steps required to convert X to Y

// Example: 
// X = 131, Y = 121
// minimum steps 1

// X 133, Y = 121 
// minimum steps 3

// Note: All the intermediate numbers also needs to be of 3 digits

#include<bits/stdc++.h>
using namespace std;

int diff(int d1, int d2)
{
    int mx = max(d1,d2);
    int mn = min(d1,d2);
    int ans = mx-mn;
    ans = min(ans,10-ans);
    return ans;
}

int minimumSteps(int x, int y)
{
    int res = 0;
    while(x>0 && y>0)
    {
        res += diff(x%10,y%10);
        x/=10;
        y/=10;
    }
    return res;
}

// Explain Approach:
// 1. We create a function to find the difference between two digits.
// 2. We then find the difference between the last digit of x and the last digit of y.
// 3. We then find the difference between the second last digit of x and the second last digit of y.
// 4. Then we repeat for all the digits.
// 5. We return the sum of all the differences.

int main() {
    int x = 131;
    int y = 121;
    cout << minimumSteps(x, y) << endl;
    return 0;
}