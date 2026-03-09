#include <iostream>
#include <vector>

using namespace std;

int N, M, H;
vector<vector<bool>> ladder;

bool check() {
    for (int i = 1; i <= N; ++i) {
        int pos = i;
        for (int j = 1; j <= H; ++j) {
            if (ladder[j][pos]) {
                pos++;
            } else if (ladder[j][pos - 1]) {
                pos--;
            }
        }
        if (pos != i) {
            return false;
        }
    }
    return true;
}

bool dfs(int depth, int limit, int r, int c) {
    if (depth == limit) {
        return check();
    }

    for (int i = r; i <= H; ++i) {
        for (int j = (i == r) ? c : 1; j < N; ++j) {
            if (!ladder[i][j] && !ladder[i][j - 1] && !ladder[i][j + 1]) {
                ladder[i][j] = true;
                if (dfs(depth + 1, limit, i, j + 2)) {
                    return true;
                }
                ladder[i][j] = false;
            }
        }
    }

    return false;
}

int main() {
    cin >> N >> M >> H;

    ladder.resize(H + 1, vector<bool>(N + 1, false));

    for (int i = 0; i < M; ++i) {
        int a, b;
        cin >> a >> b;
        ladder[a][b] = true;
    }

    for (int i = 0; i <= 3; ++i) {
        if (dfs(0, i, 1, 1)) {
            cout << i << endl;
            return 0;
        }
    }

    cout << -1 << endl;

    return 0;
}