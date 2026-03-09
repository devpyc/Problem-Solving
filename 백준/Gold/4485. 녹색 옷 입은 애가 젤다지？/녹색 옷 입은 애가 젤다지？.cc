#include <bits/stdc++.h>
#define INF 1'000'000'000
#define pii pair<int,int>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, tc = 1;
    while (cin>>n&&n) {
        vector<vector<int>> a(n, vector<int>(n));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                cin >> a[i][j];

        vector<vector<int>> d(n, vector<int>(n, INF));
        priority_queue<pair<int,pii>, vector<pair<int,pii>>, greater<>> pq;
        d[0][0] = a[0][0];
        pq.push({d[0][0], {0,0}});

        int dx[4] = {1,-1,0,0}, dy[4] = {0,0,1,-1};
        while (!pq.empty()) {
            auto [cost, pos] = pq.top(); pq.pop();
            int x = pos.first, y = pos.second;
            if (cost > d[x][y]) continue;
            for (int k = 0; k < 4; k++) {
                int nx = x + dx[k], ny = y + dy[k];
                if (nx>=0 && nx<n && ny>=0 && ny<n) {
                    int nc = cost + a[nx][ny];
                    if (nc < d[nx][ny]) {
                        d[nx][ny] = nc;
                        pq.push({nc, {nx,ny}});
                    }
                }
            }
        }
        cout << "Problem " << tc++ << ": " << d[n-1][n-1] << "\n";
    }
}