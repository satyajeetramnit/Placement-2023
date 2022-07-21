#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;

int solution(int N){
    // cout<<N<<endl;git 
    int index = -1;
    bool neg=false;
    if (N<0){
        neg=true;
    }
    string s= to_string(N);
    char X='5';
    if(!neg){
        for (int i = 0; i < s.length() - 1; i++) {
            if (s[i] == X && s[i] - '0' < s[i + 1] - '0') {
                index = i;
                break;
            }
        }

        if (index == -1) {
            for (int i = s.length() - 1; i >= 0; i--) {
                if (s[i] == X) {
                    index = i;
                    break;
                }
            }
        }
    }

    else{
        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] == X && s[i] - '0' < s[i + 1] - '0') {
                index = i;
                break;
            }
        }

        if (index == -1) {
            for (int i = s.length() - 1; i >= 0; i--) {
                if (s[i] == X) {
                    index = i;
                    break;
                }
            }
        }
    }
 
    string ans = "";
    for (int i = 0; i < s.length(); i++) {
        if (i != index)
            ans = ans + s[i];
    }
    if(neg){
        int res=stoi(ans);
        return res;
    }
 
    else{
        return stoi(ans);
    }
}

int main(){
    int N;
    cin>>N;
    cout<<solution(N);
    return 0;
}