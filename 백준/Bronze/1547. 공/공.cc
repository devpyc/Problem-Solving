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

int main()
{
    io;
    int n;
    cin >> n;

    int ans = 1;
    for (int i = 0; i < n; ++i) {
        int x, y;
        cin >> x >> y;

        if (ans == x) {
            ans = y;
        } else if (ans == y) {
            ans = x;
        }
    }
    cout << ans << endl;
    return 0;
}