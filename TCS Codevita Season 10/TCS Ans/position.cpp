#include<bits/stdc++.h> 
using namespace std; 
  
vector<char> change(vector<char> &str){ 
    vector<char> ans; 
    for(char ch : str){ 
        if(ch == 'a' or ch == 'd'){ 
            ans.push_back('a'); 
            ans.push_back('b'); 
        } 
        else if(ch == 'c' or ch == 'b'){ 
            ans.push_back('c'); 
            ans.push_back('d'); 
        } 
    } 
    return ans; 
} 
 
long long between(long long n){ 
    for(long long i = 0 ; i < n/2 + 1 ; i++){ 
        if(n < pow(2,i)){ 
            return i; 
        } 
    } 
    return 0; 
} 
 
int main(){ 
    vector<vector<char>> vec(65, vector<char>(20)); 
 
    vec[1][0] = 'a'; 
    vec[2][0] = 'a'; 
    vec[2][1] = 'b'; 
 
    long long n; 
    cin >> n; 
 
    long long row_num = between(n); 
 
    for(long long i = 3 ; i <= row_num; i++){ 
        vec[i] = change(vec[i-1]); 
    } 
     
    for(auto i : vec){ 
        for(auto j : i){             
            cout << j << " "; 
        } 
        cout << endl; 
    } 
 
    cout << vec[row_num][n - pow(2,row_num-1)]; 
 
    return 0; 
}