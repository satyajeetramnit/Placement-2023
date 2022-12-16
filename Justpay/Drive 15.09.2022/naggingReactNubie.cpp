#include <bits/stdc++.h>
using namespace std;

int main() {
    unordered_map<int, vector<int>> map;
    unordered_map<int, int> visited;
    int N, M, x, y;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> x;
        map[x] = {};
    }
    cin >> M;
    for (int i = 0; i < M; i++) {
        cin >> x >> y;
        map[x].push_back(y);
    }
    cin >> x >> y;
    vector<int> res;
    queue<int> q;
    visited[x] = 1;
    q.push(x);
    while (!q.empty()) {
        int z = q.front();
        q.pop();
        for (int i : map[z]) {
            if (visited[i] == 0) {
                if (i == y)
                    res.push_back(z);
                else {
                    visited[i] = 1;
                    q.push(i);
                }
            }
        }
    }
    sort(res.begin(), res.end());
    for (int i : res)
        cout << i << " ";
    return 0;
}

// Same code in python
