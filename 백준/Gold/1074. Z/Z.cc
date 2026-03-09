#include <bits/stdc++.h>
#define int long long
#define endl "\n"
#define io ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int N, r, c;
int ans = 0;

void solve(int n, int y, int x) {
    if (y == r && x == c) {
        cout << ans << endl;
        return;
    }

    if (r < y + n && r >= y && c < x + n && c >= x) {
        solve(n / 2, y, x);
        solve(n / 2, y, x + n / 2);
        solve(n / 2, y + n / 2, x);
        solve(n / 2, y + n / 2, x + n / 2);
    } else {
        ans += n * n;
    }
}

int32_t main() {
    io;
    cin >> N >> r >> c;
    solve(1 << N, 0, 0);

    return 0;
}