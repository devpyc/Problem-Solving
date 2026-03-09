#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int MOD = 1e9 + 7;
const int MAX_N = 1e6 + 5;

ll N, M;
vector<ll> fact(MAX_N), inv_fact(MAX_N);

ll pow_mod(ll base, ll exp) {
    ll result = 1;
    while (exp > 0) {
        if (exp & 1) result = (result * base) % MOD;
        base = (base * base) % MOD;
        exp >>= 1;
    }
    return result;
}

void precompute() {
    fact[0] = inv_fact[0] = 1;
    for (int i = 1; i < MAX_N; i++) {
        fact[i] = (fact[i-1] * i) % MOD;
        inv_fact[i] = pow_mod(fact[i], MOD - 2);
    }
}

ll nCr(int n, int r) {
    if (r > n) return 0;
    return (fact[n] * inv_fact[r] % MOD) * inv_fact[n-r] % MOD;
}

vector<ll> solve() {
    vector<ll> result(N);
    vector<ll> prob(N+1, 0);

    for (int k = 1; k <= N; k++) {
        ll sum = 0;
        for (int i = 1; i <= k; i++) {
            ll ways = nCr(k-1, i-1);
            ll p = pow_mod(k, MOD-2);
            ll q = pow_mod(p, i);
            ll term = (ways * q) % MOD;
            sum = (sum + pow_mod(term, M)) % MOD;
        }
        result[k-1] = sum;
    }

    return result;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> M;
    precompute();
    vector<ll> answer = solve();
    for (int i = 0; i < N; i++) {
        cout << answer[i] << " ";
    }
    cout << endl;
    return 0;
}