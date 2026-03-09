#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define pb push_back
#define pob pop_back
#define pii pair<int, int>
#define mi map<int, int>
#define qi queue<int>
#define vi vector<int>
#define vvi vector<vector<int>>
#define endl "\n"
#define io ios_base::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

int main() {
    io;
    int n,m,k;
    cin>>n>>m>>k;

    int solve = min(n / 2, m);
    int st = n + m - (solve * 3);

    while (k > st) {
        solve--;
        st += 3;
    }

    cout << solve << endl;

    return 0;
}