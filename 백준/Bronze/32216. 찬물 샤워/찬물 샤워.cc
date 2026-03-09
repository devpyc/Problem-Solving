#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, t;
    cin >> n >> k >> t;

    vector<int> d(n);
    for (int i = 0; i < n; i++) {
        cin >> d[i];
    }

    ll ans = 0;
    int T = t;

    for (int i = 0; i < n; i++) {
        if (T < k) {
            T = T + d[i] + abs(T - k);
        } else if (T > k) {
            T = T + d[i] - abs(T - k);
        } else {
            T = T + d[i];
        }

        ans += abs(T - k);
    }

    cout << ans << endl;

    return 0;
}