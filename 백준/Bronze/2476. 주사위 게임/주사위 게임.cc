#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define pb push_back
#define pf push_front
#define pob pop_back
#define pof pop_front
#define pii pair<int,int>
#define mi map<int,int>
#define qi queue<int>
#define di deque<int>
#define vi vector<int>
#define vvi vector<vector<int>>
#define tiii tuple<int,int,int>
#define MOD 9901
#define endl "\n"
#define io ios_base::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

void solve() {
    int N;
    cin >> N;
    int ans = 0;

    for (int i = 0; i < N; ++i) {
        int a, b, c;
        cin >> a >> b >> c;

        int price;
        if (a == b && b == c) {
            price = 10000 + a * 1000;
        } else if (a == b || a == c) {
            price = 1000 + a * 100;
        } else if (b == c) {
            price = 1000 + b * 100;
        } else {
            price = max({a, b, c}) * 100;
        }

        if (price > ans) {
            ans = price;
        }
    }

    cout << ans << endl;
}

int main() {
    solve();
    return 0;
}