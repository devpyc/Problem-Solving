#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

const int MOD = 1000000007;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector<long long> scoville(N);
    for (int i = 0; i < N; i++) {
        cin >> scoville[i];
    }

    sort(scoville.begin(), scoville.end());

    long long result = 0;
    vector<long long> powers_of_two(N);

    powers_of_two[0] = 1;
    for (int i = 1; i < N; i++) {
        powers_of_two[i] = (powers_of_two[i - 1] * 2) % MOD;
    }

    for (int i = 0; i < N; i++) {
        long long max_contrib = (scoville[i] * powers_of_two[i]) % MOD;
        long long min_contrib = (scoville[i] * powers_of_two[N - i - 1]) % MOD;
        result = (result + max_contrib - min_contrib + MOD) % MOD;
    }

    cout << result << endl;

    return 0;
}