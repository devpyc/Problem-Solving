#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll a, b, c, d, e, f;

bool check(ll p, ll q, ll r, ll s) {
    if (p == r) {
        if (e != p) return false;
        return (f >= min(q, s) && f <= max(q, s));
    }
    if (q == s) {
        if (f != q) return false;
        return (e >= min(p, r) && e <= max(p, r));
    }
    return false;
}

int solve(ll p, ll q, ll r, ll s, ll t, ll u) {
    if (check(p, q, r, s) || check(r, s, t, u)) {
        return 1e9;
    }
    int n = 0;
    if ((p == r && r != t) || (q == s && s != u)) n++;
    return n;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> a >> b >> c >> d >> e >> f;

    int n = 1e9;

    if (!check(a, b, c, d) && (a == c || b == d)) {
        n = 0;
    }

    if (!check(a, b, a, d) && !check(a, d, c, d)) {
        n = min(n, 1);
    }
    if (!check(a, b, c, b) && !check(c, b, c, d)) {
        n = min(n, 1);
    }

    for (ll y = -10; y <= 10; y++) {
        if (y == f) continue;
        if (!check(a, b, a, y) && !check(a, y, c, y) && !check(c, y, c, d)) {
            n = min(n, 2);
        }
    }

    for (ll x = -10; x <= 10; x++) {
        if (x == e) continue;
        if (!check(a, b, x, b) && !check(x, b, x, d) && !check(x, d, c, d)) {
            n = min(n, 2);
        }
    }

    cout << n << '\n';

    return 0;
}