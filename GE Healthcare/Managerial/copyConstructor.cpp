#include<bits/stdc++.h>
using namespace std;

class A
{
public:
    int* arr;
    char* str;
    double num;
	 A(A &x){
		this->arr=x.arr;
		this->str=x.str;
		this->num=x.num;	
	}
	
};

int main(){
	A satya;
	satya.str={'S','A','T','Y','A'};
	satya.num=8.88;
	satya.arr={1,2,3,4}	
	A ramnit(satya);
}