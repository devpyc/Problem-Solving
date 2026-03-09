#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

int32_t main() {
    int N, M, R, C;
    cin >> N >> M >> R >> C;

    vector<pair<int, int>> apartments(R);
    vector<int> rents(R);
    for (int i = 0; i < R; ++i) {
        cin >> apartments[i].first >> apartments[i].second >> rents[i];
    }

    vector<pair<int, int>> stores(C);
    for (int j = 0; j < C; ++j) {
        cin >> stores[j].first >> stores[j].second;
    }

    vector<vector<int>> dist(N + 1, vector<int>(M + 1, INT_MAX));
    queue<pair<int, int>> q;
    
    for (const auto& store : stores) {
        int x = store.first;
        int y = store.second;
        dist[x][y] = 0;
        q.push({x, y});
    }
    
    int dx[] = {1, -1, 0, 0};
    int dy[] = {0, 0, 1, -1};
    
    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for (int i = 0; i < 4; ++i) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx >= 1 && nx <= N && ny >= 1 && ny <= M && dist[nx][ny] == INT_MAX) {
                dist[nx][ny] = dist[x][y] + 1;
                q.push({nx, ny});
            }
        }
    }

    int min_score = INT_MAX;

    for (int i = 0; i < R; ++i) {
        int apartment_x = apartments[i].first;
        int apartment_y = apartments[i].second;
        int rent = rents[i];

        int distance = dist[apartment_x][apartment_y];
        int score = distance * rent;
        min_score = min(min_score, score);
    }

    cout << min_score << endl;
    return 0;
}