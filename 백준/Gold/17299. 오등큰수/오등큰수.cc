#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> f(1000001, 0);
    vector<int> r(n, -1);

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        f[a[i]]++;
    }

    stack<int> s;
    for (int i = 0; i < n; ++i) {
        while (!s.empty() && f[a[s.top()]] < f[a[i]]) {
            r[s.top()] = a[i];
            s.pop();
        }
        s.push(i);
    }

    for (int i = 0; i < n; ++i) {
        cout << r[i] << " ";
    }

    return 0;
}