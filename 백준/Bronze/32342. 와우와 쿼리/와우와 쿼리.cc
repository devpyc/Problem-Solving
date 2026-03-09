#include <bits/stdc++.h>
using namespace std;

int cnt(const string &S) {
    int count = 0;
    for (size_t i = 0; i + 2 < S.size(); ++i) {
        if (S[i] == 'W' && S[i + 1] == 'O' && S[i + 2] == 'W') {
            count++;
        }
    }
    return count;
}

int main() {
    int q;
    cin >> q;
    while (q--) {
        string s;
        cin >> s;
        cout << cnt(s) << endl;
    }
    return 0;
}