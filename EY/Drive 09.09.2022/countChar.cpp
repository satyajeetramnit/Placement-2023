#include<bits/stdc++.h>
using namespace std;

int countChar(string data, char coder){
    int answer=0;
    for(int i=0;i<data.size();i++){
        if(data[i]==coder){
            answer++;
        }
    }
    return answer;
}

int main(){
    string data="haveagoodday";
    char coder='a';
    cout<<countChar(data,coder);
    return 0;
}