#include<bits/stdc++.h>
using namespace std;

// In Python
// def getMinimumCost(parcels, k):
//     resultantCost = 0
//     n = len(parcels)
//     need = k-n
//     if need == 0:
//         return 0
//     parcelID = 1
//     while need != 0:
//         if parcelID not in set(parcels):
//             resultantCost += parcelID
//             need -= 1
//         parcelID += 1
//     return resultantCost

// same code in java
// public static int getMinimumCost(List<Integer> parcels, int k) {
//     int resultantCost = 0
//     int n = parcels.size();
//     int need = k-n;
//     if (need == 0) {
//         return 0;
//     }
//     int parcelID = 1;
//     while (need != 0) {
//         if (!parcels.contains(parcelID)) {
//             resultantCost += parcelID;
//             need -= 1;
//         }
//         parcelID += 1;
//     }
//     return resultantCost;
// }

// same in c++

long getMinimumCost(vector<int> parcel, int k) {
    long finalCost=0;
    int n=parcel.size();
    int need=k-n;
    int i=1;
    unordered_map<int,bool> m;
    for(int i=0;i<n;i++)
        m[parcel[i]]=true;
    while(need){
        if(m.find(i)==m.end()){
            finalCost+=i;
            need--;
            m[i]=true;
        }
        i++;
    }
    return finalCost;
}

// // same code in java
// public static long getMinimumCost(int[] parcels, int k) {
//     long finalCost = 0;
//     int n = parcels.length;
//     int need = k - n;
//     int i = 1;
//     HashSet<Integer> m = new HashSet<>();
//     for (int i = 0; i < n; i++)
//         m.add(parcels[i]);
//     while (need != 0) {
//         if (!m.contains(i)) {
//             finalCost += i;
//             need--;
//             m.add(i);
//         }
//         i++;
//     }
//     return finalCost;
// }

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> parcel(n);
    for (int i = 0; i < n; i++) {
        cin >> parcel[i];
    }
    cout << getMinimumCost(parcel, k) << endl;
    return 0;
}
