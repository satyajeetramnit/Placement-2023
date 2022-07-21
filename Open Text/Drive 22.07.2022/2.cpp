#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;

int sumDigits(int n){
    int sum=0;
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    return sum;
}

int solution(int N){
    int sum=sumDigits(N);
    int i=N+1;
    while(sum!=sumDigits(i)){
        i++;
    }
    return i;
}

int main(){
    int N;
    cin>>N;
    cout<<solution(N);
    return 0;
}