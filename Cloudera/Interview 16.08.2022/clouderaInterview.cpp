// Q. Count the frequency of each character in a string

#include<bits/stdc++.h>
using namespace std;

void countFrequency(string s){
    // first we need to count the frequency of each character in the string
    // for that we need to create a hashmap
    // hashmap is a data structure that stores key value pairs
    // key is the character and value is the frequency of the character
    // then we need to iterate through the string and for each character we need to check if the hashmap contains the character
    // if it contains the character then we need to increment the frequency of the character by 1
    // if it does not contain the character then we need to add the character to the hashmap with frequency 1
    // then we need to iterate through the hashmap and print the key and value
    unordered_map<char,int> map;

    for(auto c:s){
        map[c]++;
    }
    for(auto p:map){
        cout<<p.first<<" "<<p.second<<endl;
    }
}

// Brute Force Approach 
void countFrequencyBruteForce(string s){
    int n=s.size();
    if(n==0) return;
    int count[26]={0};
    for(auto c:s){
        count[c-'a']++;
    }
    for(int i=0;i<26;i++){
        if(count[i]!=0){
            cout<<(char)(i+'a')<<" "<<count[i]<<endl;
        }
    }
}

int main(){
    string s="abacadefghibj11145";
    countFrequency(s);
    return 0;
}