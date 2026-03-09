#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define pb push_back
#define pob pop_back
#define pii pair<int,int>
#define mp map<int,int>
#define qi queue<int>
#define vi vector<int>
#define vvi vector<vector<int>>
#define tiii tuple<int,int,int>
#define endl "\n"
#define io ios_base::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

const int INF = INT_MAX;

struct Edge {
    int to, time;
};

int main() {
    io
    int N, K;
    cin >> N >> K;

    vector<vector<Edge>> g(N + 2);
    for (int i = 0; i < K; ++i) {
        int u, v, t;
        cin >> u >> v >> t;
        g[u].pb({v, t});
        g[v].pb({u, t});
    }

    vector<vi> dist(N + 2, vi(101, INF));
    priority_queue<tiii, vector<tiii>, greater<>> pq;

    dist[0][0] = 0;
    pq.push({0, 0, 0});

    while (!pq.empty()) {
        auto [cur_time, u, time_cleaning] = pq.top();
        pq.pop();

        if (cur_time > dist[u][time_cleaning]) continue;

        for (auto& edge : g[u]) {
            int v = edge.to;
            int t = edge.time;
            int cleaning = time_cleaning + t;

            if (cleaning <= 100) {
                if (dist[v][cleaning] > cur_time + t) {
                    dist[v][cleaning] = cur_time + t;
                    pq.push({cur_time + t, v, cleaning});
                }
            } else {
                int cleaned_time = cur_time + t + 5;
                if (dist[v][t] > cleaned_time) {
                    dist[v][t] = cleaned_time;
                    pq.push({cleaned_time, v, t});
                }
            }
        }
    }

    int ans = INF;
    for (int i = 0; i <= 100; ++i) {
        ans = min(ans, dist[N + 1][i]);
    }

    cout << ans << endl;

    return 0;
}