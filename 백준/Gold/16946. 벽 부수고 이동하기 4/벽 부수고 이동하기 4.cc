#include <iostream>
#include <vector>
#include <queue>
#include <set>

using namespace std;

const int MAX_N = 1000;
const int dx[] = {0, 0, -1, 1};
const int dy[] = {-1, 1, 0, 0};

int N, M;
int inputMap[MAX_N][MAX_N];
int group[MAX_N][MAX_N];
int groupSize[MAX_N * MAX_N];

int bfs(int x, int y, int label) {
    int size = 1;
    queue<pair<int, int>> q;
    q.push({x, y});
    group[x][y] = label;

    while (!q.empty()) {
        int cx = q.front().first;
        int cy = q.front().second;
        q.pop();

        for (int i = 0; i < 4; ++i) {
            int nx = cx + dx[i];
            int ny = cy + dy[i];

            if (nx >= 0 && nx < N && ny >= 0 && ny < M && inputMap[nx][ny] == 0 && group[nx][ny] == 0) {
                q.push({nx, ny});
                group[nx][ny] = label;
                size++;
            }
        }
    }

    return size;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> M;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            char c;
            cin >> c;
            inputMap[i][j] = c - '0';
        }
    }

    int label = 1;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            if (inputMap[i][j] == 0 && group[i][j] == 0) {
                groupSize[label] = bfs(i, j, label);
                label++;
            }
        }
    }

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            if (inputMap[i][j] == 1) {
                set<int> adjacentGroups;

                for (int k = 0; k < 4; ++k) {
                    int ni = i + dx[k];
                    int nj = j + dy[k];

                    if (ni >= 0 && ni < N && nj >= 0 && nj < M && inputMap[ni][nj] == 0) {
                        adjacentGroups.insert(group[ni][nj]);
                    }
                }

                int totalSize = 1;
                for (int adjGroup : adjacentGroups) {
                    totalSize += groupSize[adjGroup];
                }

                cout << totalSize % 10;
            } else {
                cout << 0;
            }
        }
        cout << '\n';
    }
    return 0;
}