// WAP to display the character alaog with its count with the sub-string of same character.
//Example:
//Input: 1122333445
//Output: 1222334251

#include<iostream>
#include<string>
using namespace std;
string getSequence(string str){
    if(str=="")
        return "No string found";
    int count=0;
    char ch=str[0];
    string ans="";
    ans+=char(str[0]);
    for(auto i:str){
        if(i==ch)
            count++;
        else{
            ans+=to_string(count);
            count=1;
            ch=i;
            ans+=i;
        }
    }
    ans+=to_string(count);
    return ans;
}

int main(){
    string str;
    cin>>str;
    cout<<getSequence(str);
    return 0;
}