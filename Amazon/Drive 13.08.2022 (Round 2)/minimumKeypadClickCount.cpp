// A recently launched supplemental typing keypad gained significant popularity on Amazon Shopping due to its flexibility.
// This keypad can be connected to any electronic device and has 9 buttons, where each button can have up to 3 lowercase English letters. 
// The buyer has the freedom to choose which letters to place on a button while ensuring that the arrangement is valid. 

// A keypad design is said to be valid if:

// • All 26 letters of the English alphabet exist on the keypad.
// • Each letter is mapped to exactly one button.
// • A button has at most 3 letters mapped to it.

// The keypad click count is defined as the number of button presses required to print a given string. 
// In order to send messages faster, customers tend to set the keypad design in such a way that 
// the keypad click count is minimized while maintaining its validity.

// Given a string text consisting of lowercase English letters only, find the minimum keypad click count.

// Function Description 
// Complete the function minimumkeypad ClickCount in the editor below.

// minimumKeypadClickCount has the following parameters: 
// string text: the string to be typed

// Returns:
// int: the minimum keypad click count to type the given string

#include<bits/stdc++.h>
using namespace std;

int minimumKeypadClickCount(string text){
    int n=text.size();
    if(n==0) return 0;
    
    unordered_map<char,int> map;
    for(auto c:text){
        map[c]++;
    }
    vector<pair<int,char>> v;
    for(auto p:map){
        v.push_back({p.second,p.first});
    }
    sort(v.begin(),v.end(),greater<pair<int,char>>());
    
    // for(auto p:v){
    //     cout<<p.first<<" "<<p.second<<endl;
    // }

    int ans=0,count=1,prev=0;
    for(auto p:v){
        if(count<10){
            ans+=(1*p.first);
        }
        else if(count<19){
            ans+=(2*p.first);
        }
        else {
            ans+=(3*p.first);
        }
        count++;
    }
    return ans;
}

int main(){
    string text = "abacadefghibj";
    cout<<minimumKeypadClickCount(text);
    return 0;
}