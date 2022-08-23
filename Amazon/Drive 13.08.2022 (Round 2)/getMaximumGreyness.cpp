// Several satellites provide observational black and white images which are stored in data centers at Amazon Web Services (AWS).
// A black and white image is composed of pixels and is represented as an (nm) grid of cells. 
// Each pixel can have a value of 0 or 1, where o represents a white pixel and 1 represents a black pixel. 
// The greyness of a cell (i, j) is affected by the pixel values in the throw and the jth column. More formally, 
// the greyness of the cell (i, j) is the difference between the number of black pixels in the throw and the ith column 
// and the number of white pixels in the throw and the jth column.

// Find the maximum greyness among all the cells of the grid.

// Note: The value of cell (i,j) is counted both in the ith row and in the jth column.

// Function Description 
// Complete the function getMaximumGreyness in the editor below.

// getMaximumGreyness has the following parameter:
// string pixels[n]: a grid of pixels, where the th string consists of m characters and represents the throw of pixels.

// Returns
// int: the maximum greyness of the grid of pixels

#include<bits/stdc++.h>
using namespace std;

int getMaximumGreyness(vector<string> pixels){
    int n=pixels.size();
    int m=pixels[0].size();
    vector<int> row(n,0);
    vector<int> col(m,0);
    for(int i=0;i<n;i++){
        for(int j=0;j<pixels[i].size();j++){
            if(pixels[i][j]=='1'){
                row[i]++;
                col[j]++;
            }
        }
    }
    int grey=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=0;j<pixels[i].size();j++){
            grey=max(grey,row[i]+col[j]-(m-row[i]+n-col[j]));
        }
    }
    return grey;
}

int main(){
    vector<string> pixels = {"011","101","001"};
    cout<<getMaximumGreyness(pixels);
    return 0;
}