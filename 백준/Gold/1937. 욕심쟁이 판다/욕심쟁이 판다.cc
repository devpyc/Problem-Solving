#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MAX_N = 501;
int n;
int forest[MAX_N][MAX_N];
int dp[MAX_N][MAX_N];

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, -1, 0, 1};

int dfs(int x, int y) {
    if (dp[x][y] != -1) {
        return dp[x][y];
    }

    dp[x][y] = 1;  // 판다가 최소한 1일은 살 수 있음

    for (int i = 0; i < 4; ++i) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx >= 0 && nx < n && ny >= 0 && ny < n && forest[nx][ny] > forest[x][y]) {
            dp[x][y] = max(dp[x][y], 1 + dfs(nx, ny));
        }
    }

    return dp[x][y];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> forest[i][j];
            dp[i][j] = -1;  // 초기값으로 -1을 설정
        }
    }

    int answer = 0;

    // 각 지점에서 시작하는 최대 생존 일수 계산
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            answer = max(answer, dfs(i, j));
        }
    }
    cout << answer << endl;

    return 0;
}