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

void solve(vector<vector<char>>& b, int x, int y, int s) {
    if (s == 1) {
        b[x][y] = '*';
        return;
    }
    int ns = s / 3;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (i == 1 && j == 1) {
                continue;
            }
            solve(b, x + i * ns, y + j * ns, ns);
        }
    }
}

int main() {
    io;
    int N;
    cin >> N;

    vector<vector<char>> b(N, vector<char>(N, ' '));
    solve(b, 0, 0, N);

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << b[i][j];
        }
        cout << endl;
    }

    return 0;
}