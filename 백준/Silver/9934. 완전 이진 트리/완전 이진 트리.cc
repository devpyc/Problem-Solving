#include <bits/stdc++.h>
using namespace std;

vector<int> a;
vector<vector<int>> b;

void solve(int s, int e, int d) {
    if (s > e) return;
    
    int m = (s + e) / 2;
    b[d].push_back(a[m]);
    
    solve(s, m - 1, d + 1);
    solve(m + 1, e, d + 1);
}

int main() {
    int k;
    cin >> k;
    
    int n = (1 << k) - 1;
    a.resize(n);
    b.resize(k);
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    solve(0, n - 1, 0);
    
    for (int i = 0; i < k; i++) {
        for (int j : b[i]) {
            cout << j << " ";
        }
        cout << "\n";
    }
}