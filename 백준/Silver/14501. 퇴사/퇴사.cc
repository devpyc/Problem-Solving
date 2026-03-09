#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> t(n+1);
    vector<int> p(n+1);
    vector<int> dp(n+2, 0);

    for(int i = 1; i <= n; i++) {
        cin >> t[i] >> p[i];
    }

    for(int i = n; i >= 1; i--) {
        if(i + t[i] > n + 1) {
            dp[i] = dp[i+1];
        }
        else {
            dp[i] = max(dp[i+1], dp[i + t[i]] + p[i]);
        }
    }

    cout << dp[1] << "\n";

    return 0;
}