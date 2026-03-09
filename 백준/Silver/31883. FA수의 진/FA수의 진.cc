#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

struct Edge {
    int time;
    int index;
    bool isCrosswalk;
};

int32_t main() {
    int N;
    cin >> N;

    vector<vector<Edge>> adj(N + 1);
    vector<int> A(N + 1), B(N + 1), C(N + 1), D(N + 1);

    for (int i = 1; i <= N; ++i) {
        cin >> A[i] >> B[i] >> C[i] >> D[i];
        adj[i - 1].push_back({A[i], i, true});
        adj[i - 1].push_back({B[i], i, false});
    }

    vector<int> dist(N + 1, INT_MAX);
    dist[0] = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
    pq.push({0, 0});

    while (!pq.empty()) {
        int curr_time = pq.top().first;
        int u = pq.top().second;
        pq.pop();

        if (curr_time > dist[u]) continue;

        for (const auto &edge : adj[u]) {
            int next_time = curr_time + edge.time;
            if (edge.isCrosswalk) {
                int cycle = C[edge.index] + D[edge.index];
                int time_in_cycle = curr_time % cycle;
                if (time_in_cycle >= C[edge.index]) {
                    next_time += cycle - time_in_cycle;
                }
            }

            if (next_time < dist[edge.index]) {
                dist[edge.index] = next_time;
                pq.push({next_time, edge.index});
            }
        }
    }

    cout << dist[N] << endl;

    return 0;
}