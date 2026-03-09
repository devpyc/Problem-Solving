#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;

    vector<int> p, c;

    for (int i = 0; i < n; i++) {
        if (s[i] == 'P') p.push_back(i);
        else if (s[i] == 'C') c.push_back(i);
    }

    int swaps = min(p.size(), c.size());
    for (int i = 0; i < swaps; i++) {
        swap(s[p[i]], s[c[i]]);
    }

    cout << s << endl;

    return 0;
}