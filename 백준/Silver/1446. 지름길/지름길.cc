#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

int main() {
    int N, D;
    cin >> N >> D;

    vector<vector<pair<int, int>>> graph(10001);
    vector<int> dist(10001, INF);

    for (int i = 0; i < N; i++) {
        int start, end, length;
        cin >> start >> end >> length;
        if (end > D) continue;
        graph[start].push_back({end, length});
    }

    dist[0] = 0;
    for (int i = 0; i <= D; i++) {
        if (i > 0) {
            dist[i] = min(dist[i], dist[i-1] + 1);
        }
        for (auto &p : graph[i]) {
            int next = p.first, d = p.second;
            if (dist[next] > dist[i] + d) {
                dist[next] = dist[i] + d;
            }
        }
    }

    cout << dist[D] << endl;

    return 0;
}