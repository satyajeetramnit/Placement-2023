// Write a function solution that given a string 5 consisting of N characters, returns the alphabetically smallest string that can be obtained by removing exactly one letter from S

// Examples:

// 1. Given S="acb" by removing one letter, you can obtain act ab or cb Your function should return "ab" (after removing c) since it is alphabetically smaller than "ac" and "bc.
// 2. Given S="hot", your function should return ho", which is alphabetically smaller than 'ht' and 'ot'
// 3. Given S="codility", your function should return ceility, which can be obtained by removing the second letter
// 4. Given S="awa", your function should return aa. Any occurrence of can be removed White an efficient elgorithm for the following assumptions

// N is an integer within the range (2,100,000) string 5 consists only of lowercase letters (a-z)

#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;

string slution(string &s){
    // char ch='z';
    // bool flag=false;
    // while(!flag){
    //     if(s.find(ch)!=string::npos){
    //         flag=true;
    //         int i=s.find(ch);
    //         s.erase(i,1);
    //     }
    //     else{
    //         ch--;
    //     }
    // }
    int n=s.size();
    for(int i=0;i<n-1;i++){
        if(s[i]>s[i+1]){
            s.erase(i,1);
            break;
        }
    }
    if(s.size()==n){
        s.erase(n-1,1);
    }
    return s;
}

int main(){
    string s;
    cin>>s;
    cout<<slution(s);
    return 0;
}