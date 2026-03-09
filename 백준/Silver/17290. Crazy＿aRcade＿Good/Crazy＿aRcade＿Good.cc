#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

struct Position {
    int row, col;
};

bool isSafeCell(int row, int col, const vector<string>& board) {
    for (int i = 0; i < 10; ++i) {
        if (board[row][i] == 'o') return false;
    }
    for (int i = 0; i < 10; ++i) {
        if (board[i][col] == 'o') return false;
    }
    return true;
}

int bfs(const Position& start, const vector<string>& board) {
    vector<vector<bool>> visited(10, vector<bool>(10, false));
    queue<tuple<int, int, int>> q;

    const vector<Position> directions = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

    q.push(make_tuple(start.row, start.col, 0));
    visited[start.row][start.col] = true;

    while (!q.empty()) {
        auto [row, col, dist] = q.front();
        q.pop();

        if (isSafeCell(row, col, board)) {
            return dist;
        }

        for (const auto& dir : directions) {
            int newRow = row + dir.row;
            int newCol = col + dir.col;
            if (newRow >= 0 && newRow < 10 && newCol >= 0 && newCol < 10 && !visited[newRow][newCol]) {
                q.push(make_tuple(newRow, newCol, dist + 1));
                visited[newRow][newCol] = true;
            }
        }
    }

    return -1;
}

int32_t main() {
    int r, c;
    cin >> r >> c;
    --r; --c;

    vector<string> board(10);
    for (int i = 0; i < 10; ++i) {
        cin >> board[i];
    }

    Position start = {r, c};
    int result = bfs(start, board);

    cout << result << endl;

    return 0;
}