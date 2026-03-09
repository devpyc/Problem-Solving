#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int N;
vector<vector<char>> grid;
string target = "MOBIS";
int dx[8] = {-1, 1, 0, 0, -1, 1, -1, 1};
int dy[8] = {0, 0, -1, 1, -1, -1, 1, 1};

bool inBounds(int x, int y) {
    return x >= 0 && x < N && y >= 0 && y < N;
}

int countMOBIS() {
    int count = 0;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            for (int dir = 0; dir < 8; ++dir) {
                int x = i, y = j;
                bool found = true;
                for (int k = 0; k < 5; ++k) {
                    if (!inBounds(x, y) || grid[x][y] != target[k]) {
                        found = false;
                        break;
                    }
                    x += dx[dir];
                    y += dy[dir];
                }
                if (found) {
                    ++count;
                }
            }
        }
    }
    return count;
}

int main() {
    cin >> N;
    grid.resize(N, vector<char>(N));
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> grid[i][j];
        }
    }

    int result = countMOBIS();
    cout << result << endl;

    return 0;
}