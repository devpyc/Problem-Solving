#include <bits/stdc++.h>
#define int long long
#define pb push_back
#define fi first
#define se second
#define endl "\n"
#define pii pair<int,int>
#define vi vector<int>
#define qi queue<int>
#define vvi vector<vector<int>>
#define vvvi vector<vector<vector<int>>>
#define io ios_base::sync_with_stdio(false); cin.tie(nullptr)
using namespace std;

int32_t main() {
    int n;
    cin >> n;

    vi s(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> s[i];
    }

    int a;
    cin >> a;

    vector<bool> visited(n + 1, false);
    qi q;
    q.push(a);
    visited[a] = true;
    int count = 0;

    while (!q.empty()) {
        int cur = q.front();
        q.pop();
        count++;

        int left = cur - s[cur];
        int right = cur + s[cur];

        if (left >= 1 && !visited[left]) {
            visited[left] = true;
            q.push(left);
        }

        if (right <= n && !visited[right]) {
            visited[right] = true;
            q.push(right);
        }
    }

    cout << count << endl;

    return 0;
}