#include <iostream>
#include <vector>
#include <deque>
#include <cstring>

using namespace std;

const int MAX_N = 50;
const int MAX_M = 50;

int N, M, T;
deque<int> circle[MAX_N];
bool visited[MAX_N][MAX_M];

int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};

void init() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void input() {
    cin >> N >> M >> T;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            int num;
            cin >> num;
            circle[i].push_back(num);
        }
    }
}

void rotateCircle(int x, int d, int k) {
    x--;

    for (int i = x; i < N; i += x + 1) {
        for (int j = 0; j < k; ++j) {
            if (d == 0) {
                int temp = circle[i].back();
                circle[i].pop_back();
                circle[i].push_front(temp);
            } else {
                int temp = circle[i].front();
                circle[i].pop_front();
                circle[i].push_back(temp);
            }
        }
    }
}

bool removeAdjacent() {
    bool removed = false;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            if (circle[i][j] == 0) continue;

            for (int d = 0; d < 4; ++d) {
                int nx = i + dx[d];
                int ny = (j + dy[d] + M) % M;

                if (nx >= 0 && nx < N && ny >= 0 && ny < M && circle[i][j] == circle[nx][ny]) {
                    visited[i][j] = visited[nx][ny] = true;
                    removed = true;
                }
            }
        }
    }

    if (removed) {
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < M; ++j) {
                if (visited[i][j]) {
                    circle[i][j] = 0;
                }
            }
        }
    }

    return removed;
}

void adjustCircle() {
    double sum = 0, count = 0;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            if (circle[i][j] != 0) {
                sum += circle[i][j];
                count++;
            }
        }
    }

    if (count == 0) return;

    double average = sum / count;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            if (circle[i][j] == 0) continue;

            if (circle[i][j] > average) {
                circle[i][j]--;
            } else if (circle[i][j] < average) {
                circle[i][j]++;
            }
        }
    }
}

int getSum() {
    int sum = 0;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            sum += circle[i][j];
        }
    }

    return sum;
}

void solve() {
    for (int t = 0; t < T; ++t) {
        int x, d, k;
        cin >> x >> d >> k;

        rotateCircle(x, d, k);

        memset(visited, false, sizeof(visited));

        if (!removeAdjacent()) {
            adjustCircle();
        }
    }

    cout << getSum() << '\n';
}

int main() {
    init();
    input();
    solve();

    return 0;
}