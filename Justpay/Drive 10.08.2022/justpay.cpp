// The Malicious Haskeller

// In this problem, a nagging React newbie B is constantly troubling React expert A. 
// React Expert A needs to know the minimum set of people following him he needs to remove from his network to stop B from reaching out to him.

// The input is given as follows:

// The first line is a number which is the number of people in the social network. 
// The next following lines are the actual members of the social network whose names are written in separate lines. 
// Following that is the number of connections, followed by a new line separated list of connections given as <follower> <following> 
// Then on the next line is the id of the person who wants to our React Expert (A) and on the next line is the id of the person who is the newbie (B)

// INPUT FORMAT

// total members in ReactCommunity Network

// memberldl
// Memberid2
// .........
// MemberldN

// Total connections
// <follower1> <following1> 
// <follower2> <following2>
// ............
// <followerN> <followingN>
// React_Newbie_Id

// React_Expert_id

// OUTPUT FORMAT

// Output should be a sorted set of ids of persons whom A should block to prevent B from sending messages to him. 
// -1 if there is no such member to be blocked.

// Sample Input
// 4
// 2
// 5
// 7
// 9
// 4
// 2 9
// 7 2
// 7 9
// 9 5
// 7
// 9

// Sample Output
// 2 7

#include<bits/stdc++.h>
using namespace std;

void soultion(vector<int> membersIds,vector<pair<int,int>> followers,int follower, int following){
    int n = membersIds.size();
    if(n==0) return;
    unordered_map<int,vector<int>> map;
    for(auto p:followers){
        map[p.first].push_back(p.second);
        map[p.second].push_back(p.first);
    }
    vector<int> ans;
    if(map.find(follower)!=map.end()){
        for(auto id:map[follower]){
            if(id==following){
                ans.push_back(follower);
                continue;
            }
            ans.push_back(id);
        }
    }
    sort(ans.begin(),ans.end());
    ans.erase(unique(ans.begin(),ans.end()),ans.end());
    for(auto id:ans){
        cout<<id<<" ";
    }
}

int main(){
    vector<int> membersIds = {2,5,7,9};
    vector<pair<int,int>> followers = {{2,9},{7,2},{7,9},{9,5}};
    int follower = 7;
    int following = 9;
    soultion(membersIds,followers,follower,following);
    return 0;
}