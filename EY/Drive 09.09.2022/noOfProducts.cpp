#include<bits/stdc++.h>
using namespace std;

int noOfProducts(vector<int> order, int disAmount){
    int count=0;
    for(int i=0;i<order.size();i++){
        if(disAmount%abs(order[i])==0){
            count++;
        }
    }
    return count;
}

int main(){
    vector<int> order={1,2,3,4,5,6,7,8,9,10};
    int disAmount=10;
    cout<<noOfProducts(order,disAmount);
    return 0;
}