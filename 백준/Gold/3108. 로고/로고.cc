#include <iostream>
#include <vector>
#include <deque>
#include <tuple>

using namespace std;

int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

void bfs(int& x, int& y, vector<vector<int>>& a, vector<vector<int>>& c) {
    deque<pair<int, int>> q;
    q.push_back({x, y});
    c[x][y] = 1;

    while (!q.empty()) {
        x = q.front().first;
        y = q.front().second;
        q.pop_front();

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (0 <= nx && nx <= 2000 && 0 <= ny && ny <= 2000) {
                if (a[nx][ny] == 1 && c[nx][ny] == 0) {
                    c[nx][ny] = 1;
                    q.push_back({nx, ny});
                }
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<vector<int>> a(2001, vector<int>(2001, 0));
    vector<vector<int>> c(2001, vector<int>(2001, 0));
    vector<pair<int, int>> start;

    for (int i = 0; i < n; i++) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        x1 += 500; y1 += 500; x2 += 500; y2 += 500;
        x1 *= 2; y1 *= 2; x2 *= 2; y2 *= 2;
        start.push_back({x1, y1});

        for (int i = x1; i <= x2; i++) {
            if (i == x1 || i == x2) {
                for (int j = y1; j <= y2; j++) {
                    a[i][j] = 1;
                }
            } else {
                a[i][y1] = 1;
                a[i][y2] = 1;
            }
        }
    }

    int ans = 0;

    for (int i = 0; i < start.size(); i++) {
        int x, y;
        tie(x, y) = start[i];

        if (c[x][y] == 0) {
            bfs(x, y, a, c);
            ans += 1;
        }
    }

    if (a[1000][1000] == 1) {
        ans -= 1;
    }

    cout << ans << '\n';

    return 0;
}