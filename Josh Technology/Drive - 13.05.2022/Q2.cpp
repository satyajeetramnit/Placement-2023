// return the pair of indices if the strings in the array of strings are reverse of each other.
// input: {"abc", "cba", "xyz", "yzx","zyx"}
// output: [0, 1],[2, 4]

#include<iostream>
#include<vector>
#include<string>
using namespace std;

void printPairs(vector<string>& arr, int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==string(arr[j].rbegin(), arr[j].rend())){
                cout<<"["<<i<<", "<<j<<"]"<<", ";
            }
        }
    }
}

int main(){
    int n;
    cin>>n;
    vector<string> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    printPairs(arr, n);
    return 0;
}