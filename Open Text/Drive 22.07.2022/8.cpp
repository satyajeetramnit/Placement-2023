#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;

bool isSame(string s){
    if(s[0]==s[1] && s[1]==s[2]){
        return true;
    }
    return false;
}

string solution(string s){
    int count=1;
    char x=s[0];
    int len=s.length();
    string ans="";
    ans+=x;
    for(int i=1;i<s.length();i++){
        if(s[i]==x){
            count++;
        }
        else{
            x=s[i];
            count=1;
        }
        cout<<i<<" "<<count<<" "<<x<<endl;
        // if(count==3){
        //     continue;
        // }
        if(count<=2){
            ans+=s[i];
        }
    }

    // no consecutive 3 characters
    // for(int i=0;i<s.length()-2;i++){
    //     // cout<<s.substr(i,3)<<endl;
    //     // cout<<isSame(s.substr(i,3))<<endl;
    //     if(isSame(s.substr(i,3))){
    //         s.erase(i,1);
    //         i-=1;
    //     }
    // }
    return ans;
}

int main()
{
    string s;
    cin>>s;
    cout<<solution(s);
    return 0;
}
