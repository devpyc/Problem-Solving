#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> p(m, 0);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            int v;
            cin >> v;
            p[j] += v;
        }
    }

    vector<pair<int, int>> a;
    for(int i = 0; i < m; i++) {
        a.push_back({p[i], -(i+1)});
    }

    sort(a.begin(), a.end(), greater<pair<int, int>>());

    for(int i = 0; i < m; i++) {
        cout << -a[i].second << " ";
    }

    return 0;
}