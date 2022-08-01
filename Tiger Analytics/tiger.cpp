#include<iostream>
using namespace std;

bool isPrime(int n)
{
    if (n == 1)
        return false;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

// nth prime number
int main(){
    int n;
    cin>>n;
    int i=2;
    int count=0;
    while(count<n){
        if(isPrime(i)){
            count++;
        }
        i++;
    }
    cout<<i-1<<endl;
}


// Output
// int f(int n){
//     static int i=1;
//     if(n>=3){
//         return n;
//     }
//     n=n+1;
//     i++;
//     return f(n);
// }

// int main(){
//     cout<<f(1)<<endl;
// }

// Output
// unsigned int n=9;
// unsigned int count =0;
// while(n){
//     count+=n&0;
//     n>>=1;
// }
// cout<<count<<endl;