#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

struct Person {
    int x, y, v, p;
};

int N, K, T;
Person pua;
vector<Person> fri;

double dis(const Person& a, const Person& b) {
    return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}

bool can(const Person& a, const Person& b) {
    return dis(a, b) <= K && abs(a.v - b.v) <= T;
}

int main() {
    cin >> N >> K >> T;
    cin >> pua.x >> pua.y >> pua.v;
    pua.p = 0;

    fri.resize(N);
    for (int i = 0; i < N; i++) {
        cin >> fri[i].x >> fri[i].y >> fri[i].v >> fri[i].p;
    }

    vector<vector<int>> g(N + 1);
    for (int i = 0; i < N; i++) {
        if (can(pua, fri[i])) g[0].push_back(i + 1);
        for (int j = i + 1; j < N; j++) {
            if (can(fri[i], fri[j])) {
                g[i + 1].push_back(j + 1);
                g[j + 1].push_back(i + 1);
            }
        }
    }

    vector<bool> vis(N + 1, false);
    queue<int> q;
    q.push(0);
    vis[0] = true;

    while (!q.empty()) {
        int cur = q.front();
        q.pop();
        for (int nxt : g[cur]) {
            if (!vis[nxt]) {
                vis[nxt] = true;
                q.push(nxt);
            }
        }
    }

    vector<int> ans;
    for (int i = 0; i < N; i++) {
        if (vis[i + 1] && fri[i].p) ans.push_back(i + 1);
    }

    if (ans.empty()) {
        cout << 0 << endl;
    } else {
        for (int i : ans) cout << i << " ";
        cout << endl;
    }

    return 0;
}