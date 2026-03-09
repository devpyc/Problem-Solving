#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, c;
    cin >> n >> c;

    vector<bool> v(c + 1, false);
    int cnt = 0;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        for (int j = x; j <= c; j += x) {
            if (!v[j]) {
                v[j] = true;
                cnt++;
            }
        }
    }

    cout << cnt;
    return 0;
}