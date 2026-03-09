#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    vector<int> arr(26, 0);
    for (char c : s) {
        arr[c - 'a']++;
    }

    vector<int> cnt;
    for (int x : arr) {
        if (x > 0) {
            cnt.push_back(x);
        }
    }

    if (cnt.size() <= 2) {
        cout << 0 << endl;
        return 0;
    }

    sort(cnt.begin(), cnt.end(), greater<int>());

    int ans = 0;

    for (int i = 2; i < cnt.size(); i++) {
        ans += cnt[i];
    }
    cout << ans << "\n";
}