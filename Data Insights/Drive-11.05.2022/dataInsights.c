// Q1.
#include<stdio.h>
int main(){
    char str[20]="Hello";
    char *const p=str;
    *p='J';
    printf("%s",str);
    return 0;
}
// Output: Jello

// Q2.
#include<bits/stdc++.h>
using namespace std;
void f2(int p=30){
    for(int i=20;i<=p;i++){
        cout << i << " ";
    }
}
void f1(int &m){
    m+=10;
    f2(m);
}
int main(){
    int n=20;
    f1(n);
    cout << n << " ";
    return 0;
}
// Output: 20 21 22 23 24 25 26 27 28 29 30 30

// Q3.
#include<stdio.h>
int fun(char *str1){
    char *str2=str1;
    while(*++str1);
    return(str1-str2);
}
int main(){
    char *str="Josh Technology Group";
    printf("%d",fun(str));
    return 0;
}
// Output: 21

// Q4.
#include<stdio.h>
void main(){
    int k=5;
    int *p=&k;
    int **m=&p;
    printf("%d %d %d",k,*p,**m);
}
// Output: 5 5 5

// Q5.
#include<stdio.h>
int main(){
    char str[20]="Josh";
    printf("%d",sizeof(str));
    return 0;
}
// Output: 20

// Q6.
#include<stdio.h>
int main(){
    const char *s="";
    char str[]="1234";
    s=str;
    while(*s){
        printf("%c",*s);
        s++;
    }
    return 0;
}
// Output: 1234

// Q7.
#include<stdio.h>
int main(){
    char str[]="Smaller";
    int a=100;
    printf(a>10?"Greater":"%s",str);
    return 0;
}
// Output: Greater

// Q8.
#include<stdio.h>
int main(){
    int i=1,j=1;
    for(--i && ++j;i<10;i+=2){
        printf("%d-",j);
    }
    printf(";");
}
// Output: 1-1-1-1-1-;

// Q9.
#include<stdio.h>
void main(){
    int i,j,charVal="j";
    for(i=10;i>0;i-=3){
        for(j=0;j<i;j+=2){
            printf("%c ",charVal+j);
        }
        printf("\n");
    }
}
// Output:
// d f h j l 
// d f h j 
// d f 
// d

// Q10.
#include<stdio.h>
int main(){
    unsigned int x[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    printf("%u, %u, %u",x+3,*(x+3),*(x+2)+3);
}
// Output: 6422292, 6422292, 6422292

// Q11.
#include<stdio.h>
int main(){
    int x,y;
    for(x=5;x>=1;x--){
        for(y=1;y<=x;y++){
            printf("%d\n",y);
        }
    }
}
// Output:
// 1
// 2
// 3
// 4
// 5
// 1
// 2
// 3
// 4
// 1
// 2
// 3
// 1
// 2
// 1