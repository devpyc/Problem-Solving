#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

struct Edge {
    int to, length, collapse_time;
};

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<Edge>> graph(N + 1);

    for (int i = 0; i < M; ++i) {
        int u, v, d, t;
        cin >> u >> v >> d >> t;
        graph[u].push_back({v, d, t});
        graph[v].push_back({u, d, t});
    }

    auto canReachInTime = [&](int maxDelay) -> bool {
        vector<long long> minTime(N + 1, LLONG_MAX);
        priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<>> pq;

        pq.push({maxDelay, 1});
        minTime[1] = maxDelay;

        while (!pq.empty()) {
            auto [currentTime, u] = pq.top();
            pq.pop();

            if (minTime[u] < currentTime) continue;

            for (const auto& edge : graph[u]) {
                if (currentTime + edge.length <= edge.collapse_time) {
                    long long newTime = currentTime + edge.length;
                    if (newTime < minTime[edge.to]) {
                        minTime[edge.to] = newTime;
                        pq.push({newTime, edge.to});
                    }
                }
            }
        }

        return minTime[N] != LLONG_MAX;
    };

    int left = 0, right = 1e9 + 1, answer = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (canReachInTime(mid)) {
            answer = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    cout << answer << endl;

    return 0;
}