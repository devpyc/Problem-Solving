#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    int cnt = 0;
    for (char c : s) {
        if (c == 'e') {
            cnt++;
        }
    }

    string ans = "h";
    for (int i = 0; i < cnt * 2; i++) {
        ans += "e";
    }
    ans += "y";

    cout << ans << "\n";

    return 0;
}