#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    ll K;
    cin >> N >> K;

    vector<ll> A(N);
    for(auto &x: A) cin >> x;

    vector<ll> B(N);
    for(auto &x: B) cin >> x;

    vector<ll> prefix_A(N+1, 0);
    for(int i=1; i<=N; ++i){
        prefix_A[i] = prefix_A[i-1] + A[i-1];
    }

    vector<ll> prefix_B(N+1, 0);
    for(int i=1; i<=N; ++i){
        prefix_B[i] = prefix_B[i-1] + B[i-1];
    }

    ll total_A = prefix_A[N];
    ll total_B = prefix_B[N];

    ll ans = LLONG_MAX;

    ll x_min = max(0LL, K > (ll)N ? K - (ll)N : 0LL);
    ll x_max = min((ll)N, K);

    for(ll x = x_min; x <= x_max; ++x){
        ll y = K - x;
        y = min(y, (ll)N);

        ll W_A = (N >= x) ? prefix_A[N - x] : 0;
        ll W_B = (N >= y) ? prefix_B[N - y] : 0;
        ll cur = max(W_A, W_B);

        ans = min(ans, cur);
    }

    cout << ans;
}