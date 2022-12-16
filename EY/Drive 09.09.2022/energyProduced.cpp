#include<bits/stdc++.h>
using namespace std;

vector<int> energyProduced(int initialEnergy, int rate, int seconds){
    vector<int> answer;
    int temp=initialEnergy;
    answer.push_back(temp);
    for(int i=0;i<seconds-1;i++){
        temp*=rate;
        answer.push_back(temp);
    }
    return answer;
}

int main(){
    int initialEnergy=5;
    int rate=3;
    int seconds=3;
    vector<int> answer=energyProduced(initialEnergy,rate,seconds);
    for(int i=0;i<answer.size();i++){
        cout<<answer[i]<<" ";
    }
    cout<<endl;
    return 0;
}