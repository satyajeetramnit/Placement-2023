// Write a function solution that, given an integer N, returns the maximum possible value obtainable by deleting one '5' digit from the decimal representation of N. It is guaranteed that N will contain at least one '5' digit.
// Examples:
// 1. Given N = 15958, the function should return 1958.
// 2. Given N = -5859, the function should return -589.
// 3. Given N = -5000, the function should return 0. After deleting the '5', the only digits in the number are zeroes, so its value is 0.
// Assume that:
// • N is an integer within the range [-999,995..999,995);
// • N contains at least one '5' digit in its decimal representation; 
// • N consists of at least two digits in its decimal representation.

#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;

int solution(int N){
    // cout<<N<<endl;
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