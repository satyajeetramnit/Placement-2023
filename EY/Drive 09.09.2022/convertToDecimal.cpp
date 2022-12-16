#include<bits/stdc++.h>
using namespace std;

int convertToDecimal(int data){
    int answer=0;
    int rem,temp;
    int i=0;
    while(data>0){
        temp=data%10;
        answer=answer+temp*pow(2,i);
        data=data/10;
        i++;
    }
    return answer;
}

int main(){
    int data=110;
    cout<<convertToDecimal(data);
    return 0;
}
