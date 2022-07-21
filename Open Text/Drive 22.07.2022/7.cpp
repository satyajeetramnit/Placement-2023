#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;

string solution(string s){
    char check[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    string ans="";
    for(int i=25;i>=0;i--){
        if(s.find(check[i])!=string::npos && s.find(toupper(check[i]))!=string::npos){
            ans+=toupper(check[i]);
            return ans;
        }
    }
    return "NO";
}

int main(){
    string s;
    cin>>s;
    cout<<solution(s);
    return 0;
}