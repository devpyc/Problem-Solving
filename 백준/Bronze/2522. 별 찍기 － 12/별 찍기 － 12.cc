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
    for (int i = 1; i <= N; ++i) {
        for (int j = 1; j <= N - i; ++j) {
            cout << " ";
        }
        for (int j = 1; j <= i; ++j) {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = N - 1; i >= 1; --i) {
        for (int j = 1; j <= N - i; ++j) {
            cout << " ";
        }
        for (int j = 1; j <= i; ++j) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    io;
    solve();
    return 0;
}