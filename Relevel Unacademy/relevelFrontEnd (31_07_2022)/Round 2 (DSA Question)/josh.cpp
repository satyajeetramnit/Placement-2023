// Q1
#include<stdio.h>
int main(){
    int x[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    printf("%u, %u, %u",x+2,*(x+2),*(x+1)+3);
}

// Q2
for(let i=0;i<2;i++){
    console.log(i);
}

setTimeout(() => {
    console.log("Hello");
}, 0);

for(let i=0;i<2;i++){
    console.log(i);
}

// Q3
var obj1={
    'key1':{
        'innerkey':'2'
    }
}
var obj2=obj1
obj2['key1']='hello World'
console.log(obj1);

// Q4
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