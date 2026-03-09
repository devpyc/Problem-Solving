#include <bits/stdc++.h>
#define endl "\n"
#define ll long long

using namespace std;

ll mod(ll a, ll b) {
    return ((a % b) + b) % b;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll n, m;
    cin >> n >> m;

    vector<ll> pos(m + 1);
    pos[0] = 1;

    for (int i = 1; i <= m; i++) {
        int t;
        ll v;
        cin >> t >> v;

        ll p = pos[i - 1];

        if (t == 1) {
            pos[i] = mod(p + v, n);
        } else if (t == 2) {
            pos[i] = mod(p - v, n);
        } else if (t == 3) {
            pos[i] = pos[v];
        }

        if (pos[i] == 0) pos[i] = n;
    }

    cout << pos[m] << endl;

    return 0;
}