// Given a string, return the character that appears the maximum number of times in the string. The string will contain only ASCII characters, from the ranges ('a' 'z','A'-'Z','0'-'9'), and case matters. If there is a tie in the maximum number of times a character appears in the string, return the character that appears first in the string.

#include<bits/stdc++.h>
using namespace std;
char maximumOccuringCharacter(string text){
    sort(text.begin(),text.end());
    char res;
    int len=text.length();
    int maxi=0,count=1;
    for(int i=1;i<len;i++){
        if(text[i-1]!=text[i] || i==len){
            if(count>maxi){
                maxi=count;
                res=text[i-1];
            }
            count=1;
        }
        else count++;
    }
    return res;
}