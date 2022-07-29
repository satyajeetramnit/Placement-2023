#include<bits/stdc++.h>
using namespace std;


// In C
// int* solution(int score_count,long* score, int querries_count,int* querries,int* result){
//     // int* ans=new int[querries_count];
//     // prefix sum of score
//     long* prefix_sum=new long[score_count];
//     prefix_sum[0]=score[0];
//     for(int i=1;i<score_count;i++) prefix_sum[i]=prefix_sum[i-1]+score[i];
//     for(int i=0;i<querries_count;i++){
//        result[i]=prefix_sum[querries[i]-1]; 
//     }
//     return result;
// }


// int main(){
//     int score_count;
//     cin >> score_count;
//     long* score = new long[score_count];
//     for (int i = 0; i < score_count; i++) {
//         cin >> score[i];
//     }
//     int querries_count;
//     cin >> querries_count;
//     int* querries = new int[querries_count];
//     for (int i = 0; i < querries_count; i++) {
//         cin >> querries[i];
//     }
//     int* result = new int[querries_count];
//     solution(score_count,score,querries_count,querries,result);
//     for (int i = 0; i < querries_count; i++) {
//         cout << result[i] << endl;
//     }
//     return 0;
// }

// string solve(string s){
//     if(stoi(s.substr(0,1))<12) return "AM";
//     else return "PM";
// }


// In CPP
vector<int> solution(vector<long> scores, vector<int> querries) {
    vector<int> answer;
    vector<long> prefix_sum;
    prefix_sum.push_back(scores[0]);
    for(int i=1;i<scores.size();i++) prefix_sum.push_back(prefix_sum[i-1]+scores[i]);
    for(int i=0;i<querries.size();i++){
        answer.push_back(prefix_sum[querries[i]-1]);
    }
    return answer;
}

int main(){
    int score_count;
    cin>>score_count;
    vector<long> score;
    for(int i=0;i<score_count;i++){
        int temp;
        cin>>temp;
        score.push_back(temp);
    }
    int querries_count;
    cin>>querries_count;
    vector<int> querries;
    for(int i=0;i<querries_count;i++){
        int temp;
        cin>>temp;
        querries.push_back(temp);
    }
    vector<int> result=solution(score,querries);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
}