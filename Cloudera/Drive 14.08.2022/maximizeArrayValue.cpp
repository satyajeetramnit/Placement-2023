// Maximize Array Value

// Given an array arr of n positive integers, the following operation can be performed any number of times. Use a 1-based index for the array.
// • Choose any i such that 2 <= i <= n.
// • Choose any x such that 1 <= x <= arr[i] 
// • Set arr[i-1]to arr[i-1] + x
// • Set arr[i] to arr[i] - x

// Minimize the maximum value of arr using the operation and return the value.

// Example
// n=4
// arr = [1, 5, 7, 6]

// Assuming 1-based indexing. 

// One optimal sequences is:

// • Operation 1: choose i=3, x=4 (note that x <= arr[3], i.e. 4<7).
        // • Replace arr[i-1] with arr[i-1]+x or 5+ 4 = 9
        // • Replace arr[i] with arr[i]-x or 7-4=3 
        // • The array is now [1, 9, 3, 6] (maximum = 9)

// • Operation 2: i=2,x=4
        // • Replace arr[2-1] with 1 + 4 = 5 
        // • Replace arr[2] with 9 - 4 = 5
        // • The array is now [5, 5, 3, 6] (maximum = 6)

// • Operation 3: i = 4, x= 1, the resulting array is [5, 5, 4, 5] (maximum = 5)

// The minimum possible value of max(arr) is 5 after operation 3.


// Function Description
// Complete the function getMaximum in the editor below.

// getMaximum has the following parameter:
// int arr[n]: an array of integers

// Returns
// int: the minimum maximum value possible


#include<bits/stdc++.h>
using namespace std;

// Method 1
// In CPP
int getMaximum(vector<int> arr) {
    int n = arr.size(), res=arr[0], x=1, pre=arr[0];
    long long sum=pre;
    for(int i=1;i<n;i++){
        if(arr[i]>=pre){
            x++;
            pre=arr[i];
            sum+=pre;
        }
        else{
            int avg = (int)(ceil((sum * 1.0) / x));
            res = max(res, avg);
            x=1;
            pre=arr[0];
            sum=pre;
        }
    }
    int avg = (int)(ceil((sum * 1.0) / x));
    res = max(res, avg);
    return res;
}


// In Java
// public static int getMaximum(List<Integer> arr) {
//         int ans = arr.get(0);
//         int n = arr.size();
//         int k = 1;
//         int past = arr.get(0);
//         long sum = past;
//         for(int i=1;i<n;i++) {
//             if(arr.get(i) >= past) {
//                 k++;
//                 past = arr.get(i);
//                 sum += past;
//             }
//             else {
//                 int avg = (int)(Math.ceil((sum * 1.0) / k));
//                 ans = Math.max(ans, avg);
//                 k = 1;
//                 past = arr.get(0);
//                 sum = past;
//             }
//         }
//         int avg = (int)(Math.ceil((sum * 1.0) / k));
//         ans = Math.max(ans, avg);
//         return ans;
//     }


// Method 2
// In CPP
// int getMaximum(vector<int> arr) {
//     int n = arr.size();
//     int ans = arr[0];
//     for(int i=1;i<n;i++) {
//         int diff = arr[i] - arr[i-1];
//         if(diff > 0) {
//             if(diff % 2 == 0) {
//                 arr.insert(arr.begin() + i - 1, arr[i-1] + (diff / 2));
//                 ans = max(ans, arr[i-1]);
//                 arr.insert(arr.begin() + i, arr[i] + (diff / 2));
//                 ans = max(ans, arr[i]);
//             }
//             else if(diff % 2 == 1) {
//                 arr.insert(arr.begin() + i - 1, arr[i-1] + (diff / 2));
//                 ans = max(ans, arr[i-1]);
//                 arr.insert(arr.begin() + i, arr[i] + (diff / 2)+1);
//                 ans = max(ans, arr[i]);
//             }
//         }
//     }
//     return ans;
// }

// In Java
// public static int getMaximum(List<Integer> arr) {
//         int ans = arr.get(0);
//         int n = arr.size();
//         for(int i=1;i<n;i++) {
//             int diff = arr.get(i) - arr.get(i-1);
//             if(diff > 0) {
//                 if(diff % 2 == 0) {
//                     arr.add(i-1, arr.get(i-1) + (diff / 2));
//                     ans = Math.max(ans, arr.get(i-1));
//                     arr.add(i, arr.get(i) + (diff / 2));
//                     ans = Math.max(ans, arr.get(i));
//                 }
//                 else if(diff % 2 == 1) {
//                     arr.add(i-1, arr.get(i-1) + (diff / 2));
//                     ans = Math.max(ans, arr.get(i-1));
//                     arr.add(i, arr.get(i) + (diff / 2)+1);
//                     ans = Math.max(ans, arr.get(i));
//                 }
//             }
//         }
//         return ans;
//     }


int main(){
    vector<int> arr = {10,3,5,7};
    cout<<getMaximum(arr);
    // cout<<maximumArrayValue(arr);
    return 0;
}