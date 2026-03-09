#include <bits/stdc++.h>
#define ll long long
#define x first
#define y second
#define endl "\n"
using namespace std;

bool compare(const pair<string, int>& a, const pair<string, int>& b) {
    if (a.y != b.y)
        return a.y > b.y;
    if (a.x.length() != b.x.length())
        return a.x.length() > b.x.length();
    return a.x < b.x;
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    map<string, int> wc;

    for (int i = 0; i < n; i++) {
        string w;
        cin >> w;
        if (w.length() >= m) {
            wc[w]++;
        }
    }

    vector<pair<string, int>> ws(wc.begin(), wc.end());

    sort(ws.begin(), ws.end(), compare);

    for (auto& p : ws) {
        cout << p.x << endl;
    }
}