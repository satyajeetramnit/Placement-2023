// A string contains only two characters 'I' and 'D' where represent the Increasing sequence and 'D' represent the Decreasing sequence. 
// Find the minimum number without repetition of the numbers such that it follows the sequence given in the string.
// Number used in sequence must be greater than 0.

// Return 'String not found' if no input string is passed and 'String length exceed the given limit' if string length is greater than 9

#include <bits/stdc++.h>
using namespace std;
   
// Returns minimum number made from given sequence without repeating digits
string get_sequence(string str){
    int n = str.length();
    if(n==0)
        return "String not found";
    if (n >= 9)
        return "String length exceed the given limit";
 
    string result(n+1, ' ');
    int count = 1; 
    for (int i = 0; i <= n; i++){
        if (i == n || str[i] == 'I'){
            for (int j = i - 1 ; j >= -1 ; j--){
                result[j + 1] = '0' + count++;
                if(j >= 0 && str[j] == 'I')
                    break;
            }
        }
    }
    return result;
}
   
// Main function
int main()
{
    string inputs[] = {"IDID", "I", "DD", "II", "DIDI", "IIDDD", "DDIDDIID"};
    for (string input : inputs){
        cout << get_sequence(input) << "\n";
    }
    return 0;
}