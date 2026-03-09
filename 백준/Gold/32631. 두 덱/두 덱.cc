#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<ll> cmr(const vector<ll> &weights, int K) {
    int n = weights.size();
    int max_k = min(K, n);

    vector<ll> sf(max_k + 1, 0);
    for(int k = 1; k <= max_k; k++) {
        sf[k] = sf[k - 1] + weights[k - 1];
    }

    vector<ll> sb(max_k + 1, 0);
    for(int k = 1; k <= max_k; k++) {
        sb[k] = sb[k - 1] + weights[n - k];
    }

    vector<ll> mr(K + 1, 0);
    for(int t = 0; t <= K; t++) {
        if(t > max_k) {
            mr[t] = 0;
            continue;
        }
        ll cur = 0;
        for(int k = 0; k <= t; k++) {
            cur = max(cur, sf[k] + sb[t - k]);
        }
        mr[t] = cur;
    }
    return mr;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, K;
    cin >> N >> K;

    vector<ll> A(N);
    for(auto &x : A) cin >> x;

    vector<ll> B(N);
    for(auto &x : B) cin >> x;

    ll sumA = 0;
    for(auto x : A) sumA += x;

    ll sumB = 0;
    for(auto x : B) sumB += x;

    vector<ll> mrA = cmr(A, K);
    vector<ll> mrB = cmr(B, K);

    ll ans = LLONG_MAX;

    for(int t1 = 0; t1 <= K; t1++) {
        int t2 = K - t1;
        if(t2 < 0 || t2 > K) continue;

        ll W_A = sumA - (t1 <= (int)mrA.size() -1 ? mrA[t1] : 0);
        ll W_B = sumB - (t2 <= (int)mrB.size() -1 ? mrB[t2] : 0);

        ll cur = max(W_A, W_B);

        ans = min(ans, cur);
    }

    cout << ans;
}