// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5

#include<iostream>
using namespace std;

int main(){
    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}

// in python

// n=5
// for i in range(1,n+1):
//     for j in range(1,i+1):
//         print(j,end=" ")
//     print()