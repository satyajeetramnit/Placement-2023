#include<bits/stdc++.h>
using namespace std;

// def getEncryptednumbersber(numbers):
//     while(len(numbers)>2):
//         temp =[]
//         for i in range(len(numbers)-1):
//             val = numbers[i] + numbers[i+1]
//             temp.append(val%10)      
//         numbers = temp
//     return str(numbers[0] + numbers[1]) 

// // same code in c++
string getEncryptednumbersber(vector<int> numbers) {
    string ans="";
    int n=numbers.size();
    while(n>2){
        vector<int> temp;
        int value;
        for(int i=0;i<numbers.size()-1;i++){
            value=numbers[i]+numbers[i+1];
            value%=10;
            temp.push_back(value);
        }
        numbers=temp;
        n=numbers.size();
    }
    n=numbers.size();
    for(int i=0;i<n;i++){
        int x=numbers[i];
        ans+=to_string(x);
    }
    return ans;
}

int main(){
    int n;
    cin >> n;
    vector<int> numbers(n);
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }
    cout << getEncryptednumbersber(numbers) << endl;
    return 0;
}
