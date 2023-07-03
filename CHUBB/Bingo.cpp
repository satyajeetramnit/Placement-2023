// Bingo

// In the popular game of Bingo, a player has a card represented by a matrix mat of size nxm that 
// contains all of the numbers from the range 1 to nx

// The numbers are called out from an array arr of all the numbers from 1 to nx min sequential order starting from the first element. 
// When a number is called out, the player marks the corresponding number on the game card.

// Find the first number in the sequence at which either a row or column is compeletely marked.

#include<bits/stdc++.h>
using namespace std;

int getBingoNumber(vector<vector<int>> mat, vector<int> arr){
    int m = mat.size();
    int n = mat[0].size();

    unordered_map<int, pair<int, int>> dict;
    unordered_map<int, int> rows;
    unordered_map<int, int> cols;

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            dict[mat[i][j]] = {i, j};
        }
    }

    for(int i=0; i<arr.size(); i++){
        pair<int, int> temp = dict[arr[i]];
        rows[temp.first]++;
        cols[temp.second]++;

        if(rows[temp.first] == n || cols[temp.second] == m){
            return arr[i];
        }
    }

    return -1;
}

int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> mat(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mat[i][j];
        }
    }
    int n1;
    cin>>n1;
    vector<int> arr(n1);
    for(int i=0;i<n1;i++){
        cin>>arr[i];
    }
    cout<<getBingoNumber(mat,arr);
    return 0;
}