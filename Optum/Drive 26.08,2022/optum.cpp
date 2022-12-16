// Harold and his homework

// Harold and Dan are friends and study in the same class. One day, they strike a deal about completing Harold's homework.
// The deal is that, for every piece of homework belonging to Harold which Dan completes, Harold will give Dan some money. The catch is that every piece of homework has a deadline associated with it and has to be completed within that deadline only.
// It takes 1 unit amount of time to complete a homework. You have to help Dan find and return the maximum money he can earn.

// Input Specification:
// input1: The number of tasks
// input2: An array representing money associated with each task input3: An array representing the deadline of each task

// Output Specification:
// Your function must return the maximum amount of money Dan can earn

// Example 1:
// input1: 3
// input2: (20,54,41)
// input3: (3,4,5)
// Output: 115

// Explanation:
// Here, all the homework can be done as all have different deadlines and so maximum money is the sum of 20+54+41= 115.

#include<bits/stdc++.h>
using namespace std;

// n = int(input('the number of machines: '))
// x = int(input('maximum speed of the motor: '))
// k = 0
// if (2*n-1) <= x:
// 	k = x
// 	for i in range(n-1):
// 		k *= x//(2*(1+i))
// print(f'configuration modulus: {k}')

// import math

// n = int(input())
// x = int(input())
// k = 0
// if (2*n-1) <= x:
// 	k = math.factorial(2*(x - (2*(n-1))))
    
// print(k)

int factorial(int n){
    return (n==1 || n==0) ? 1: n * factorial(n - 1);
}

int configurations(int n, int x){
    // int ans=0;
    // int comp=2*input1-1;
    // if( input2 >= comp){
    //     int temp=2*(input1-1);
    //     temp= input2-temp;
    //     ans=factorial(2*(temp));
    // }
    // return ans;

    int engines = x / 2 + (x % 2 != 0 ? 1 : 0);
        if (engines < n) {
            return 0;
        } else {
            int total = engines;
            for (int i = 1; i < n; i++) {
                total = (total * --engines) % 10000;
            }
            return total;
        }
}

int configuration(int n, int x){
    int possible = ceil(x/2);
    if(x%2 == 0){
        possible*=2;
    }

}

int main(){
    int n=3,x=6;
    cout<<configurations(n,x);
    return 0;
}