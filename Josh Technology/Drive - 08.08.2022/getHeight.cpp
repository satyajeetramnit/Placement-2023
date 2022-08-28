// N people are standing in line from left to right. Each person wants to know the height of the person to left of him having height less than him. 
// If there are multiple such people he wants to know the height of the person closest to him, If there is no such person report-1

// Return 'No person found' if no person is present in line.

// Input
// The first line of input contains N, the size of the array. The second line of input contains N space-separated integers.

// Your Task:
// The task is to complete getHeight() function and print the output, which has the argument heights ie array of integers denoting the heights of the person. Output should contain N space separated integers, the ith integer should be the height reported to ith person (-1 if no person to the left is found whose height is less).

#include<bits/stdc++.h>
using namespace std;

void getHeight(int arr[],int n){
    if(n==0) {
        cout<<"No person found";
        return;
    }

    // Method 1
    cout << "-1 ";
    for (int i = 1; i < n; i++) {
        int j;
        for (j = i - 1; j >= 0; j--) {
            if (arr[j] < arr[i]) {
                cout << arr[j] << " ";
                break;
            }
        }
 
        if (j == -1)
            cout << "-1 ";
    }

    // Method 2
    // stack<int> S;
    // for (int i=0; i<n; i++){
    //     while (!S.empty() && S.top() >= arr[i])
    //         S.pop();
 
    //     if (S.empty())
    //         cout << "-1 ";
    //     else
    //         cout << S.top() << " ";
 
    //     S.push(arr[i]);
    // }
}

int main(){
    int arr[] = { 1, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    getHeight(arr, n);
    return 0;
}

