#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;

    vector<ll> s(N + 1);
    for (int i = 1; i <= N; i++) {
        cin >> s[i];
    }

    vector<ll> dp(N + 1, 0);
    vector<ll> sum(N + 1, 0);

    dp[1] = s[1];
    sum[1] = s[1];

    for (int i = 2; i <= N; i++) {
        ll front = s[i] - sum[i-1];
        
        ll back = dp[i-1];
        
        dp[i] = max(front, back);
        
        sum[i] = sum[i-1] + s[i];
    }

    cout << dp[N] << endl;

    return 0;
}