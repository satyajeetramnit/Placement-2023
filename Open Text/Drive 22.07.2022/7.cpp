// Check for the largest character in a string present in both upper and lower case

#include<iostream>
#include<cctype>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;

string solution(string &s){
    // string check = "abcdefghijklmnopqrstuvwxyz";
    // string ans="";
    // for(int i=25;i>=0;i--){
    //     if(s.find(check[i])!=string::npos && s.find(toupper(check[i]))!=string::npos){
    //         ans+=toupper(check[i]);
    //         return ans;
    //     }
    // }
    // return "NO";

    int arr[26]={0};
    int a[26]={0};
    for(int i=0;i<(int)s.size();i++){
        if(s[i]>='a' && s[i]<='z'){
            arr[s[i]-'a']++;
        }
        else{
            a[s[i]-'A']++;
        }
    }
    int maxi=-1;
    for(int i=0;i<26;i++){
        if(arr[i]>0 && a[i]>0){
            if(maxi<i) maxi=i;
        }
    }
    string ans="";
    char ch=(char)(65+maxi);
    ans+=ch;
    if(ans[0]>='A' && ans[0]<='Z') return ans;
    return "NO";
}
// same function in java
// public String solution(String s) {
//     char check[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
//     String ans="";
//     for(int i=25;i>=0;i--){
//         if(s.indexOf(check[i])!=-1 && s.indexOf(Character.toUpperCase(check[i]))!=-1){
//             ans+=Character.toUpperCase(check[i]);
//             return ans;
//         }
//     }
//     return "NO";
// }

int main(){
    string s;
    cin>>s;
    cout<<solution(s);
    return 0;
}