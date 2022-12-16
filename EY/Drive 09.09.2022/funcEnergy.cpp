#include<bits/stdc++.h>
using namespace std;

int funcEnergy(int initialEnergy, int rate, int timeN){
    int answer=initialEnergy+(rate*(timeN-1));
    return answer;
}

int main(){
    int initialEnergy=4;
    int rate=3;
    int timeN=5;
    cout<<funcEnergy(initialEnergy,rate,timeN);
    return 0;
}