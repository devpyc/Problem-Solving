#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

struct Point {
    int x, y;
};

bool isValid(int x, int y, int N, int M) {
    return x >= 0 && x < N && y >= 0 && y < M;
}

bool canReachSchool(vector<vector<int>>& grid, int N, int M, int X) {
    vector<vector<bool>> visited(N, vector<bool>(M, false));
    queue<Point> q;
    q.push({0, 0});
    visited[0][0] = true;

    int directions[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

    while (!q.empty()) {
        Point current = q.front();
        q.pop();

        if (current.x == N - 1 && current.y == M - 1) {
            return true;
        }

        for (int dx = -X; dx <= X; ++dx) {
            for (int dy = -X; dy <= X; ++dy) {
                if (abs(dx) + abs(dy) <= X) {
                    int nx = current.x + dx;
                    int ny = current.y + dy;

                    if (isValid(nx, ny, N, M) && !visited[nx][ny] && grid[nx][ny] == grid[current.x][current.y]) {
                        visited[nx][ny] = true;
                        q.push({nx, ny});
                    }
                }
            }
        }
    }

    return false;
}

int32_t main() {
    int N, M, X;
    cin >> N >> M;

    vector<vector<int>> grid(N, vector<int>(M));
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cin >> grid[i][j];
        }
    }

    cin >> X;

    if (canReachSchool(grid, N, M, X)) {
        cout << "ALIVE" << endl;
    } else {
        cout << "DEAD" << endl;
    }

    return 0;
}