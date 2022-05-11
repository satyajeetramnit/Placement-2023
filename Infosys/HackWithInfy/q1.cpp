#include<bits/stdc++.h>
using namespace std;

string trim(string);

int NGD(int N,vector<int> arr){
    int maxi=*max_element(arr.begin(),arr.end());
    // cout<<maxi<<endl;
    vector<int> bh;
    for(int i=1;i*i<=maxi;i++){
        bh.push_back(i*i);
        bh.push_back(i*i);
    }
    int sizebh=bh.size();
    unordered_map<int,int> m;
    for(int i=0;i<sizebh;i++){
        m[bh[i]]++;
        // cout<<bh[i]<<" ";
    }
    // cout<<endl;
    // int tcount=0;
    int count=0;
    for(auto k:arr){
        for(int i=0;i<sizebh;i++){
            // tcount+=m[k-bh[i]];
            if(m.find(k-bh[i])!=m.end()){
                count++;
                break;
            }
            // if(k-bh[i]==bh[i]) tcount--;
        }
        // unordered_map<int,int> m;
        // for(int i=0;i<sizebh;i++){
        //     if(m.find(k-bh[i]) != m.end()){
        //         count+=m[k-bh[i]];
        //     }
        //     m[bh[i]]++;
        // }
    }
    return count;
    // return tcount/4;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    string inputline;

    getline(cin,inputline);
    int N=stoi(trim(inputline));

    vector<int> Arr(N);
    for(int j=0;j<N;j++){
        getline(cin,inputline);
        Arr[j]=stoi(trim(inputline));
    }

    int result=NGD(N,Arr);
    cout<<result<<"\n";
    return 0;
}

/*Utility functions. Don't modify these*/
string trim(string str){
    if(str.empty())
        return str;

    size_t firstScan = str.find_first_not_of(' ');
    size_t first = firstScan == string::npos ? str.length() : firstScan;
    size_t last = str.find_last_not_of(' ');
    return str.substr(first, last - first + 1);
}