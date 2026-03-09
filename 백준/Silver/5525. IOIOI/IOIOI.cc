#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    string s;

    cin >> n >> m >> s;

    vector<int> dp(m, 0);
    int ans = 0;

    for (int i = 2; i < m; i++) {
        if (s[i] == 'I' && s[i-1] == 'O' && s[i-2] == 'I') {
            dp[i] = dp[i-2] + 1;
            if (dp[i] >= n) {
                ans++;
            }
        }
    }
    cout << ans << "\n";
}