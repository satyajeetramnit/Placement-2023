#include <bits/stdc++.h>
using namespace std;

void create(map<int, vector<int>> mp)
{
    // file pointer
    fstream fout;

    // opens an existing csv file or creates a new file.
    fout.open("verdis_q3.csv", ios::out | ios::app);

    for (auto i : mp)
    {
        cout << i.first << "=";
        for (int j = 0; j < i.second.size(); j++)
        {
            fout << i.second[j] << " ";
        }
        cout << endl;
    }

    
}
int main()
{
    int n, k;
    cout << "Enter the number of bottles:-\n";
    cin >> n;
    cout << "Enter the number of prisoners:-\n";
    cin >> k;
    map<int, vector<int>> mp;
    for (int i = 1; i <= n; i++)
    {
        int j = i;
        int bit = 0;
        while (j > 0)
        {
            if (j % 2)
                mp[bit + 1].push_back(i);
            j = j / 2;
            bit++;
        }
    }

    create(mp);
   
    cout << "Enter the death and alive sequence-" << endl;
    string seq;
    cin >> seq;
    int ans = 0;
    for (int i = seq.size() - 1; i >= 0; i--)
    {
        if (seq[i] == '1')
        {
            ans += pow(2, seq.size() - 1 - i);
        }
    }
    cout << "Poisioned bottle is:-" << endl;
    cout << ans << endl;
}