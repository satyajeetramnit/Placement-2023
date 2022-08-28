// Suppose there is a circle, There are N petrol pumps on that circle You will be given was sets of Data 
// 1. The amount of petrol that every petrol pump has
// 2. Distance from that petrol pump to the next petrol pump.

// Find a starting point where the truck can start to get through the complete circle without exhausting the petrol in between. 
// Return -1 if no such point exists.

// Note: Assume for 1-litre petrol, the truck can go 1 unit of distance.

#include <bits/stdc++.h>
using namespace std;

int get_circle_starting_point(int *petrol, int *distance,int n){
    int start=0,deficit=0;
    int cap=0;
    for(int i=0;i<n;i++){
        cap+=petrol[i]-distance[i];
        if(cap<0){
            start=i+1;
            deficit+=cap;
            cap=0;
        }
    }
    return (cap+deficit>=0)?start:-1;
}

int main(){
    int n;
    cin>>n;
    int petrol[n],distance[n];
    for(int i=0;i<n;i++){
        cin>>petrol[i];
    }
    for(int i=0;i<n;i++){
        cin>>distance[i];
    }
    cout<<get_circle_starting_point(petrol,distance,n);
    return 0;
}

// For Further referrence : https://www.geeksforgeeks.org/find-a-tour-that-visits-all-stations/