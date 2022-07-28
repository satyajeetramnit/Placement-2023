#include<bits/stdc++.h>
using namespace std;

int miniumGroups(vector<int> awards, int k) {
    sort(awards.begin(), awards.end());
    int cut = 0;
    int cur_min = awards[0];
    for (int i = 0; i < awards.size(); i++){
        if (awards[i] - cur_min > k){
            cur_min = awards[i];
            cut++;
        }
    }
    return cut + 1;
}

// In Python
// def minimumGroups(awards,k):
//     out=[]
//     awards.sort()
//     i=0
//     count=0
//     while(i<len(awards)):
//         if(i+k>len(awards)):
//             break
//         if(awards[i+k-1]>awards[i]):
//             count+=1
//             i+=k
//         else:
//             i+=1
//     return count

// in java

// public static int miniumGroups(List<Integer> awards, int k) {
//     Collections.sort(awards);
//     int cut = 0;
//     int cur_min = awards.get(0);
//     for (int i = 0; i < awards.size(); i++){
//         if (awards.get(i) - cur_min > k){
//             cur_min = awards.get(i);
//             cut++;
//         }
//     }
//     return cut + 1;
// }

int main(){
    int n;
    cin >> n;
    vector<int> tempChange(n);
    for (int i = 0; i < n; i++) {
        cin >> tempChange[i];
    }
    cout << miniumGroups(tempChange, 2) << endl;
    return 0;
}