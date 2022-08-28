// Closest Random Points

// In many real world applications the problem of finding a pair of closest points arises. 
// In the real world, data is usually distributed randomly. Given n points on a plane that are randomly generated with uniform distribution, 
// find the squared shortest distance between pairs of these points.

// Example
// There are 3 points with x coordinates x = [0, 1, 2] and y=[0, 1, 4]. 
// The points have the xy coordinates (0, 0), (1, 1) and (2, 4). 
// The closest points are (0,0) and (1, 1), and their squared shortest distance is (1-0)²+(1-0)² = 2.

// Function Description
// Complete the function closestSquaredDistance in the editor below.

// closestSquaredDistance has the following parameter(s): 
// int x[n]: each x[i] denotes the x coordinate of the ith point 
// int y[n]: each y[i] denotes the y coordinate of the ith point

// Returns: long: a long integer that denotes the squared

#include<bits/stdc++.h>
using namespace std;

// Method 1
// long closestSquaredDistance(vector<int> x,vector<int> y){
//     int n = x.size();
//     if(n==0) return 0;
//     vector<pair<int,int>> v;
//     for(int i=0;i<n;i++){
//         v.push_back({x[i],y[i]});
//     }
//     sort(v.begin(),v.end());
//     long ans = LONG_MAX;
    
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             long x1 = v[i].first;
//             long y1 = v[i].second;
//             long x2 = v[j].first;
//             long y2 = v[j].second;
//             long dist = abs((x1-x2) * (x1-x2) + (y1-y2) * (y1-y2));
//             // cout<<dist<<endl;
//             if(dist<ans){
//                 ans = dist;
//             }
//         }
//     }
//     return ans;
// }

// Method 2
long closestSquaredDistance(vector<int> x,vector<int> y){
    int n = x.size();
    if(n==0) return 0;
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++){
        v.push_back({x[i],y[i]});
    }
    sort(v.begin(),v.end());
    long ans = LONG_MAX;
    
    for(int i=0;i<n;i++){
        long x1 = v[i].first-v[i-1].first;
        long y1 = v[i].second-v[i-1].second;
        long dist = abs((x1) * (x1) + (y1) * (y1));
        if(dist<ans){
            ans = dist;
        }
    }
    return ans;
}


int main(){
    vector<int> x = {543243,5000};
    vector<int> y = {0,322};

    // vector<int> x={77,1000,992,1000000};
    // vector<int> y={0,1000,500,0};

    // vector<int> x={0,10,15};
    // vector<int> y={0,10,20};
    cout<<closestSquaredDistance(x,y);
    return 0;
}