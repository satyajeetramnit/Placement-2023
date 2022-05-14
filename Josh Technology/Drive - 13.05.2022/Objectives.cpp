#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

// Q1.
void f(int n){
    if(n<=1){
        printf("%d", n);
    }
    else{
        f(n/2);
        printf("%d", n%2);
    }
}
int main(){
    f(270);
}

//Output : 100001110

// Q2.
int f(int &x,int c){
    c=c-1;
    if(c==0){
        return 1;
    }
    x=x+2;
    return f(x,c)*x;
}
int main(){
    int p=5;
    printf("%d", f(p,p));
    return 0;
}

// Output : 28561

// Q3.
int main(){
    int i,j,charVal='a';
    for(int i=0;i<=10;i+=3){
        for(int j=0;j<i;j+=3){
            printf("%c",charVal+j);
        }
        printf("\n");
    }
}

//Output :
// a
// ad
// adg

// Q4.
int fun(char *str1){
    char *str2=str1;
    while(*str1++);
    return str1-str2;
}
int main(){
    char *str="Josh Technology Group";
    printf("%d",fun(str));
    return 0;
}
// Output : 22

// Q5.
#include<iostream>
using namespace std;

int &fun() {
    static int a = 10; 
    return a;
}

int main() { 
    int &y= fun();
    y = y +30;
    cout<<fun();
    return 0;
}
// Output : 40

// Q6.
#include<stdio.h>

int main(){
    char str[20] = "Josh"; 
    printf("%d", sizeof(str));
    return 0;
}
// output : 20


// Q7.
#include<stdio.h> 
void fun(int **p);
int main(){
    int a[3][4]={1, 2, 3, 4, 4, 3, 2, 8, 7, 8, 9, 0};
    int *ptr; 
    ptr = &a[1][1];
    fun(&ptr);
    return 0;
}

void fun(int **p){
    printf("%d", **p);
}
// Output : 3

// Q8.
int main(){
    int x = 10; 
    if(x-- == 10)
        cout<<"Ten"<<endl; 
    else if(--x == 11)
        cout<<"Eleven"<<endl;
    return 0;
}
// Output : Ten

// Q9.
#include <stdio.h>
int main(){
    int x[4][3]={{1,2,3},{4, 5, 6},{7, 8, 9},{10,11,12}}; 
    printf("%u, %u, %u", x+2,*(x+2),*(x+1)+3);
}
// Output : 6422280, 6422280, 6422280

// Q10.
void func(const int &a){
    int temp=10;
    a=temp;
    cout<<a<<endl;
}
int main(){
    int a=5;
    func(a);
    return 0;
}
// Output : Error