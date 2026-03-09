#include <bits/stdc++.h>
#define int long long
#define endl "\n"
#define MOD 1000000007
using namespace std;

int32_t main() {
    int N, M;
    cin >> N >> M;

    vector<vector<long long>> dp(M + 1, vector<long long>(26, 0));
    
    for (int j = 0; j < 26; ++j) {
        dp[1][j] = 1;
    }
    
    for (int i = 2; i <= M; ++i) {
        for (int j = 0; j < 26; ++j) {
            for (int k = 0; k < 26; ++k) {
                if (abs(j - k) >= N) {
                    dp[i][j] = (dp[i][j] + dp[i - 1][k]) % MOD;
                }
            }
        }
    }
    
    long long result = 0;
    for (int j = 0; j < 26; ++j) {
        result = (result + dp[M][j]) % MOD;
    }

    cout << result << endl;

    return 0;
}