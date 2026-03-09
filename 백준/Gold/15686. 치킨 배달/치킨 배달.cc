#include <bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n, m, ans = INT_MAX;
vector<pair<int,int>> hom, chi;
vector<bool> sel;

int dist(pair<int,int>& a, pair<int,int>& b) {
    return abs(a.x - b.x) + abs(a.y - b.y);
}

void solve(int idx, int cnt) {
    if (cnt == m) {
        int total = 0;
        for (auto& h : hom) {
            int min_d = INT_MAX;
            for (int j = 0; j < chi.size(); j++) {
                if (sel[j]) {
                    min_d = min(min_d, dist(h, chi[j]));
                }
            }
            total += min_d;
        }
        ans = min(ans, total);
        return;
    }

    for (int i = idx; i < chi.size(); i++) {
        if (!sel[i]) {
            sel[i] = true;
            solve(i + 1, cnt + 1);
            sel[i] = false;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int x;
            cin >> x;
            if (x == 1) hom.push_back({i, j});
            if (x == 2) chi.push_back({i, j});
        }
    }

    sel.resize(chi.size(), false);
    solve(0, 0);

    cout << ans << '\n';
    return 0;
}