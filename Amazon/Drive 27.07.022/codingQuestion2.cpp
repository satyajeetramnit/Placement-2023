#include<bits/stdc++.h>
using namespace std;

// def predictDays(days, k):
//     n = len(days) 
//     res = [] 
//     for i in range(k, n - k):
//         for j in range(i + 1, i + k + 1):
//             if days[j] > days[i]:
//                 break
//         else:
//             res.append(i)
//     return res


// In c++
int predictDays(vector<int>& days, int k) {
    int n = days.size();
    int res = 0;
    for (int i = k; i < n - k; i++) {
        int j = i + 1;
        while (j <= i + k && days[j] <= days[i]) {
            j++;
        }
        if (j > i + k) {
            res++;
        }
    }
    return res;
}

int main(){
    int n,k;
    cin >> n >> k;
    vector<int> days(n);
    for (int i = 0; i < n; i++) {
        cin >> days[i];
    }
    cout << predictDays(days,k) << endl;
    return 0;
}