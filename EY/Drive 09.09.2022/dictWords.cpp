#include<bits/stdc++.h>
using namespace std;

// Method 1 (Using SET)
vector<string> dictWords(string textInput){
    vector<string> answer;
    string temp="";
    for(int i=0;i<textInput.size();i++){
        if(textInput[i]!=' '){
            temp+=textInput[i];
        }
        else{
            answer.push_back(temp);
            temp="";
        }
    }

    set<string> words;
    for(int i=0;i<answer.size();i++){
        words.insert(answer[i]);
    }

    for(int i=0;i<answer.size();i++){
        if(words.count(answer[i])<2){
            answer.erase(answer.begin()+i);
        }
    }
    return answer;
}


// Method 2 (Using HashMap)
// vector<string> dictWords(string textInput){
//     vector<string> answer;
//     unordered_map<string,int> map;

//     int i,j,k;
//     for(i=0;i<textInput.size();i++){
//         if(textInput[i]>='a' && textInput[i]<='z'){
//             string temp="";
//             for(j=i;j<textInput.size();j++){
//                 if(textInput[j]>='a' && textInput[j]<='z'){
//                     temp+=textInput[j];
//                 }
//                 else{
//                     break;
//                 }
//             }
//             map[temp]++;
//             i=j-1;
//         }
//     }

//     for(auto it=map.begin();it!=map.end();it++){
//         if(it->second>1){
//             answer.push_back(it->first);
//         }
//     }

//     reverse(answer.begin(),answer.end());
//     return answer;
// }

int main(){
    string s="hi hi heloo wow he wow";
    vector<string> answer=dictWords(s);
    for(int i=0;i<answer.size();i++){
        cout<<answer[i]<<" ";
    }
    cout<<endl;
    return 0;
}