// Simple Matrix Summation

// Given an nxm matrix, a, where each a[i,j] is the value of the cell at the intersection of row and column, 
// create another nxm matrix, b, using the following algorithm to set the values of each b(x, y) with zero-based indexing

/*

s=0
for(i=0;i<=x;i+=1){
    for(j=0;j<=y;j+=1){
        s+=a[i,j]
    }
}
b[x,y]=s

*/

// Note that the algorithm sets just one b(x, y) per execution and that 0 ≤ x < n and 0 ≤ y < m. 
// It should be run for each element of b. Return the completed nxm matrix b.

// Function Description 
// Complete the function findMatrix in the editor below.

// findMatrix has the following parameter(s): 
// a[a[0],....a[n-1]]: a 2-dimensional array of integers

// Returns:
// int: an n x m(2-dimensional) matrix of integers denoting b

// Example
// If Matrix a is
// 1 2 3
// 4 5 6

// The final Matrix b is
// 1 3 6
// 5 12 21

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> findMatrix(vector<vector<int>> a) {
    int n = a.size(), m = a[0].size();
    vector<vector<int>> b(n, vector<int>(m));
    b[0][0] = a[0][0];
    for(int i = 1; i < n; i++) 
        b[i][0] = a[i][0] + b[i - 1][0];
    for(int j = 1; j < m; j++) 
        b[0][j] = a[0][j] + b[0][j - 1];
    for(int i = 1; i < n; i++) {
        for(int j = 1; j < m; j++) 
            b[i][j] = a[i][j] + b[i - 1][j] + b[i][j - 1] - b[i - 1][j - 1];
    }
    return b;
}

int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    vector<vector<int>> b = findMatrix(a);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}