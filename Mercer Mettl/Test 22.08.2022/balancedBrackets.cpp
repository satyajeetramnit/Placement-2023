// Balanced Brackets

// Take an input of string which will have N opening brackets [ and with N closing brackets ], in some arbitrary order.
// Determine whether the generated string is balanced; that is, it consists entirely of pairs of opening/closing brackets (in that order).

// For example:
// (empty) -> OK
// [] -> OK
// [][] -> OK
// [[][]] -> OK
// ][ -> NOT OK
// ][][ -> NOT OK
// []][[] -> NOT OK

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    stack<char> st;
    for(char c : s){
        if(c == '('|| c == '{' || c == '['){
            st.push(c);
        }
        else{
            if(st.empty()){
                cout<<"NOT OK"<<endl;
                return 0;
            }
            if(c == ')' && st.top() != '('){
                cout<<"NOT OK"<<endl;
                return 0;
            }
            if(c == '}' && st.top() != '{'){
                cout<<"NOT OK"<<endl;
                return 0;
            }
            if(c == ']' && st.top() != '['){
                cout<<"NOT OK"<<endl;
                return 0;
            }
            st.pop();
        }
    }
    if(st.empty()){
        cout<<"OK"<<endl;
    }
    else{
        cout<<"NOT OK"<<endl;
    }
    return 0;
}

// Explain Approach
// 1. Take an input of string which will have N opening brackets [ and with N closing brackets ], in some arbitrary order.
// 2. Then we will remove all the characters that are not brackets from the string.
// 3. Then we will use a stack to keep track of the order of the brackets.
// 4. Then we will iterate over each and every elements of the string and check two conditions:
//    a. if current element of the string will be opening bracket then we will just simply push it into the stack
//    b. if control comes to else part, it means that current element is a closing bracket, so check two conditions  current element matches with top of the stack and the stack must not be empty...
// 5. If control reaches to that line, it means we have got the right pair of brackets, so just pop it.
// 6. Finally, we will check whether the stack is empty or not.