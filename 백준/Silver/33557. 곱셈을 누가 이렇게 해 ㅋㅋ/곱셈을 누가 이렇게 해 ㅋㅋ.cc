#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll solve(ll A, ll B) {
    string s1 = to_string(A);
    string s2 = to_string(B);
    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());

    int n = s1.size();
    int m = s2.size();
    int Max = max(n, m);

    vector<string> s;

    for (int i = 0; i < Max; i++) {
        if (i < n && i < m) {
            int da = s1[i] - '0';
            int db = s2[i] - '0';
            int prod = da * db;
            s.push_back(to_string(prod));
        } else if (i < n) {
            int da = s1[i] - '0';
            s.push_back(to_string(da));
        } else {
            int db = s2[i] - '0';
            s.push_back(to_string(db));
        }
    }

    string res;

    for (int i = Max - 1; i >= 0; i--) {
        res += s[i];
    }
    ll ans = stoll(res);
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        ll a, b;
        cin >> a >> b;

        ll cur = a * b;
        ll check = solve(a, b);

        cout << (cur == check ? 1 : 0) << "\n";
    }
}