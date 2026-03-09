#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

const int MOD = 1000000007;

int main() {
    int N, H;
    cin >> N >> H;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    vector<long long> dp(H + 1, 0);
    dp[0] = 1;

    for (int h = 1; h <= H; h++) {
        for (int i = 0; i < N; i++) {
            if (h >= A[i]) {
                dp[h] = (dp[h] + dp[h - A[i]]) % MOD;
            }
        }
    }

    cout << dp[H] << endl;

    return 0;
}