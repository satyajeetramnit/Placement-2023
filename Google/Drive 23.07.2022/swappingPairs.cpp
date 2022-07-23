// Swapping pairs

// You are given N pairs (a_{1}, b_{1}).(a 2 ,b 2 )......(a N ,b N ) . You are also given an integer M.
// You can swap any pair, that is, for the i ^ (th) pair, alpha_{i} becomes b_{i} and b_{i} becomes a_{i} 
// You have to apply the operation in such way such that

// sum (i = 1 to N) a[i] = M,

// Your task is to determine whether the conditions can be satisfied or not. If the condition cannot be satisfied, 
// then print 'NO' (without quotes). If the condition can be satisfied, then print "YES" (without quotes) and in the next line, 
// print a lexicographically-smallest binary string of length N. Here, if the i ^ U_{i} character is '1', 
// then it means that you are swapping the i ^ (th) pair. If the i ^ (th) character is 'O' then it means that you are not swapping the i ^ (th) pair.

// In C
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<malloc.h>

char** solve(int N, int M, int** arr, int* out_n){

}

int main(){
    int out_n;
    int T;
    scanf("%d", &T);
    for(int t_i = 0; t_i < T; t_i++){
        int N;
        scanf("%d", &N);
        int M;
        scanf("%d", &M);
        int i_arr, j_arr;
        int** arr = (int**)malloc(sizeof(int*) * N);
        for(int i_arr = 0; i_arr < N; i_arr++){
            arr[i_arr] = (int*)malloc(sizeof(int) * M);
            for(int j_arr = 0; j_arr < M; j_arr++){
                scanf("%d", &arr[i_arr][j_arr]);
            }
        }
        char** out = solve(N, M, arr, &out_n);
        for(int i_out = 0; i_out < out_n; i_out++){
            printf("%s\n", out[i_out]);
        }
        for(int i_arr = 0; i_arr < N; i_arr++){
            free(arr[i_arr]);
        }
        free(arr);
    }
    return 0;
}

// In C++

// #include<bits/stdc++.h>
// using namespace std;

// vector<vector<int>> solve(int N,int M, vector<vector<int>> arr){

// }

// int main(){
//     int T;
//     scanf("%d", &T);
//     for(int t_i = 0; t_i < T; t_i++){
//         int N;
//         scanf("%d", &N);
//         int M;
//         scanf("%d", &M);
//         vector<vector<int>> arr(N, vector<int>(M));
//         for(int i_arr = 0; i_arr < N; i_arr++){
//             for(int j_arr = 0; j_arr < M; j_arr++){
//                 scanf("%d", &arr[i_arr][j_arr]);
//             }
//         }
//         vector<vector<int>> out = solve(N, M, arr);
//         for(int i_out = 0; i_out < out.size(); i_out++){
//             for(int j_out = 0; j_out < out[i_out].size(); j_out++){
//                 printf("%d ", out[i_out][j_out]);
//             }
//             printf("\n");
//         }
//     }
//     return 0;
// }