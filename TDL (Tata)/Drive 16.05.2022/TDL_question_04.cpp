// Students in a class are asked to stand in ascending order according to their heights for the annual class photograph. Determine the number of students not currently standing in their correct positions.

#include<bits/stdc++.h>
using namespace std;

int countStudents(vector<int> height){
    vector<int> cpy;
    cpy=height;
    sort(cpy.begin(),cpy.end());
    int count=0;
    for(int i=0;i<height.size();i++){
        if(height[i]!=cpy[i]){
            count++;
        }
    }
    return count;
}