#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main() {
    int n;
    cin >> n;

    unordered_set<int> s;

    for (int i = 0; i < n; ++i) {
        int a, b, c;
        cin >> a >> b >> c;

        if (s.count(a) || s.count(b) || s.count(c)) {
            cout << 1 << endl;
            return 0;
        }

        s.insert(a);
        s.insert(b);
        s.insert(c);
    }

    cout << 0 << endl;
    return 0;
}