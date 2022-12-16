#include<bits/stdc++.h>
using namespace std;

int encryptedData(int data, int key){
    string s="";
    while(data>0){
        s+=data%10+'0';
        data=data/10;
    }
    reverse(s.begin(),s.end());
    key=key%s.size();
    rotate(s.begin(),s.begin()+key,s.end());

    int res=0;
    for(int i=0;i<s.size();i++){
        res=res*10+s[i]-'0';
    }
    return res;
}

int main(){
    int data=12345;
    int key=3;
    cout<<encryptedData(data,key);
    return 0;
}
