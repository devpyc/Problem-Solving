#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> a;
vector<int> b;

void solve(int d) {
    if (d == m) {
        for (int i = 0; i < m; i++) {
            cout << b[i] << " ";
        }
        cout << "\n";
        return;
    }

    for (int i = 0; i < n; i++) {
        b[d] = a[i];
        solve(d + 1);
    }
}

int main() {
    cin >> n >> m;
    
    a.resize(n);
    b.resize(m);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    
    solve(0);
}