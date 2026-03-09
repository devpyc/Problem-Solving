#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
#define io ios_base::sync_with_stdio(false);cin.tie(nullptr);
using namespace std;

int main() {
    io;
    string s1,s2;
    cin >> s1 >> s2;

    vector<int> cnt1(26, 0), cnt2(26, 0);

    for (char c : s1) {
        cnt1[c - 'a']++;
    }

    for (char c : s2) {
        cnt2[c - 'a']++;
    }

    int ans = 0;

    for (int i = 0; i < 26; ++i) {
        ans += abs(cnt1[i] - cnt2[i]);
    }

    cout << ans << endl;

    return 0;
}