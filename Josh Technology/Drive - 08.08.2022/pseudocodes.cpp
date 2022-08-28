// Q1
#include<iostream>
using namespace std;

class LFC{
    int id;
    static int count;
    public:
    LFC(){
        count++;
        id=count;
        cout<<"constructor for id:"<<id<<endl;
    }
    ~LFC(){
        cout<<"destructor for id:"<<id<<endl;
    }
};

int LFC::count=0;

int main(){
    LFC a[3];
    return 0;
}


// Q2
#include<stdio.h>

int f1(int x){
    int b;
    if(x==1) return 1;
    else{
        b=x*f1(x-1);
        return b;
    }
}

int main(){
    int n;
    n=f1(4);
    printf("%d",n);
}

// Q3
#include<stdio.h>
int main(){
    char p;
    char q[10]={1,2,3,4,5,6,7,8,9};
    p=(q+1)[6];
    printf("%d",p);
    return 0;
}

// Q4
#include<stdio.h>
int main(){
    static int x[]={1,2,3,4,5,6,7,8};
    int i;
    for(i=2;i<6;++i)
        x[x[i]]=x[i];
    for(i=0;i<8;++i)
        printf("%d",x[i]);
    return 0;
}

// Q5
#include<stdio.h>
int myfunc(){
    10<25? return 1:return 2;
}
int main(){
    printf("%d",myfunc());
    return 0;
}

// Q6
#include<iostream>
#include<string>
using namespace std;

class A{
    int a;
    public:
    A(){
        cout<<"A's constructor called";
    }
};

class B{
    static A a;
    public:
    B(){
        cout<<"B's constructor called";
    }
    static A get(){
        return a;
    }
};

A B::a; 

int main(){int argc, char const *argv[])
{
    B b;
    A a1=b.get();
    A a2=b.get();
    A a3=b.get();
}

// Q7
#include<stdio.h>
union xyz{
    int num;
    char ch;
};

int main()
{
    union xyz x;
    printf("%d",sizeof(x));
    return 0;
}

// Q8
#include<stdio.h>
void func(){
    int x=2;
    static int y=3;
    x++;
    y++;
    printf("%d -- %d\n",x,y);
}

int main(){
    func();
    func();
    return 0;
}

// Q9
#include<stdio.h>
int f(int x){
    if(x==5) return x;
    else{
        printf("-");
        return f(x-1);
    }
}
int main(){
    int n,i;
    n=f(9);
    printf("%d",n);
}

// Q10
#include<stdio.h>
int main(void){
    char c;
    char array[100] = {1,3,9,8,5,2,4,7};
    c=(array+1)[4];
    printf("%d",c);
    return 0;
}

// Q11
#include<iostream>
using namespace std;

int main(int x){
    int i=5;
    if(--i){
        cout<<i;
        main(10);
    }
    return 0;
}

// Q12
#include<stdio.h>
int main(){
    int *ptr,a=10;
    ptr=&a;
    *ptr+=1;
    printf("%d,%d",*ptr,a);
}

// Q13
#include<stdio.h>
#include<stdlib.h>

enum {false,true};

int main(){
    int i=10;
    do{
        printf("%d\n",i);
        i++;
        if(i<15) continue;
    } while(false);

    getchar();
    return 0;
}

// Q14
#include<stdio.h>
int main(){
    int x[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    printf("%u, %u, %u",x+2,*(x+2),*(x+1)+3);
}

// Q15
for(let i=0;i<2;i++){
    console.log(i);
}

setTimeout(() => {
    console.log("Hello");
}, 0);

for(let i=0;i<2;i++){
    console.log(i);
}

// Q16
var obj1={
    'key1':{
        'innerkey':'2'
    }
}
var obj2=obj1
obj2['key1']='hello World'
console.log(obj1);

// Q17
function main(){
    try{
        f77();
    } catch (e) {
        console.log(e);
    };
    try{
        b78();
    } catch (e) {
        console.log(e);
    };
    var f77=function(){
        console.log("f77");
    }

    function b78(){
        console.log("b78");
    }
}

main();

// Q18
for(const i in "String('123')"){
    console.log(i)
}

// Q19
const doubleNumber=number => number*2;
function foo(num=5,value=doubleNumber(num)){
    console.log(num,value);
}

foo();
foo(4);