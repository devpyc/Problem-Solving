#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

const int MAX_N = 20;

struct Shark {
    int x, y, size, eatCount, time;

    Shark() : x(0), y(0), size(2), eatCount(0), time(0) {}
};

const int dx[] = {-1, 1, 0, 0};
const int dy[] = {0, 0, -1, 1};

int main() {
    int n;
    cin >> n;

    vector<vector<int>> arr(n, vector<int>(n));

    int sx, sy;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> arr[i][j];
            if (arr[i][j] == 9) {
                arr[i][j] = 0;
                sx = i;
                sy = j;
            }
        }
    }

    int size = 2;
    int move_num = 0;
    int eat = 0;

    while (true) {
        queue<tuple<int, int, int>> q;
        q.push({sx, sy, 0});
        vector<vector<bool>> visited(n, vector<bool>(n, false));
        int flag = 1e9;
        vector<tuple<int, int, int>> fish;

        while (!q.empty()) {
            int x, y, count;
            tie(x, y, count) = q.front();
            q.pop();

            if (count > flag) {
                break;
            }

            for (int k = 0; k < 4; ++k) {
                int nx = x + dx[k];
                int ny = y + dy[k];

                if (nx < 0 || ny < 0 || nx >= n || ny >= n) {
                    continue;
                }

                if (arr[nx][ny] > size || visited[nx][ny]) {
                    continue;
                }

                if (arr[nx][ny] != 0 && arr[nx][ny] < size) {
                    fish.push_back({nx, ny, count + 1});
                    flag = count;
                }

                visited[nx][ny] = true;
                q.push({nx, ny, count + 1});
            }
        }

        if (!fish.empty()) {
            sort(fish.begin(), fish.end());
            int x, y, move;
            tie(x, y, move) = fish[0];
            move_num += move;
            eat += 1;
            arr[x][y] = 0;

            if (eat == size) {
                size += 1;
                eat = 0;
            }

            sx = x;
            sy = y;
        } else {
            break;
        }
    }
    cout << move_num << '\n';

    return 0;
}