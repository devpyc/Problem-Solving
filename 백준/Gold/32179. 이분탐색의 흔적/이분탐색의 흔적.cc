#include <bits/stdc++.h>
#define ll long long

using namespace std;

const int MOD = 1000000007;

ll countArrays(int N, const vector<int>& trace) {
    vector<pair<int, int>> ranges(N + 1, {1, 100});
    int left = 1, right = N;

    for (int i = 0; i < trace.size(); ++i) {
        int mid = left + (right - left) / 2;
        ranges[mid] = {trace[i], trace[i]};

        if (i == trace.size() - 1 || trace[i] < trace[i+1]) {
            for (int j = left; j < mid; ++j) {
                ranges[j].second = min(ranges[j].second, trace[i] - 1);
            }
            left = mid + 1;
        } else {
            for (int j = mid + 1; j <= right; ++j) {
                ranges[j].first = max(ranges[j].first, trace[i] + 1);
            }
            right = mid - 1;
        }
    }

    vector<vector<ll>> dp(N + 1, vector<ll>(101, 0));

    for (int v = ranges[1].first; v <= ranges[1].second; ++v) {
        dp[1][v] = 1;
    }

    for (int i = 2; i <= N; ++i) {
        ll sum = 0;
        for (int v = 1; v <= 100; ++v) {
            sum = (sum + dp[i-1][v-1]) % MOD;
            if (v >= ranges[i].first && v <= ranges[i].second) {
                dp[i][v] = sum;
            }
        }
    }

    ll result = 0;
    for (int v = ranges[N].first; v <= ranges[N].second; ++v) {
        result = (result + dp[N][v]) % MOD;
    }

    return result;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, K;
    cin >> N >> K;

    vector<int> trace(K);
    for (int i = 0; i < K; ++i) {
        cin >> trace[i];
    }

    cout << countArrays(N, trace) << endl;

    return 0;
}