#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define pb push_back
#define pob pop_back
#define pi pair<ll, ll>
#define mi map<ll, ll>
#define qi queue<ll>
#define vi vector<ll>
#define vvi vector<vector<ll>>
#define tiii tuple<ll,ll,ll>
#define endl "\n"
#define io ios_base::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

const int INF = numeric_limits<int>::max();

void dijkstra(int start, vector<int>& dist, vector<vector<pair<int, int>>>& graph, vector<vector<int>>& parent) {
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    dist[start] = 0;
    pq.push({0, start});

    while (!pq.empty()) {
        int cost = pq.top().fi;
        int u = pq.top().se;
        pq.pop();

        if (dist[u] < cost) continue;

        for (auto& edge : graph[u]) {
            int v = edge.fi;
            int nextCost = cost + edge.se;

            if (nextCost < dist[v]) {
                dist[v] = nextCost;
                pq.push({nextCost, v});
                parent[v].clear();
                parent[v].pb(u);
            } else if (nextCost == dist[v]) {
                parent[v].pb(u);
            }
        }
    }
}

void solve(int destination, vector<vector<int>>& parent, vector<vector<pair<int, int>>>& graph) {
    queue<int> q;
    vector<bool> visited(graph.size(), false);
    q.push(destination);

    while (!q.empty()) {
        int u = q.front();
        q.pop();

        if (visited[u]) continue;
        visited[u] = true;

        for (int p : parent[u]) {
            auto it = remove_if(graph[p].begin(), graph[p].end(), [u](pair<int, int>& edge) {
                return edge.fi == u;
            });
            graph[p].erase(it, graph[p].end());
            q.push(p);
        }
    }
}

int main() {
    io;
    int n, m;
    while (cin >> n >> m) {
        if (n == 0 && m == 0) break;

        int start, end;
        cin >> start >> end;

        vector<vector<pair<int, int>>> graph(n);
        for (int i = 0; i < m; ++i) {
            int u, v, p;
            cin >> u >> v >> p;
            graph[u].push_back({v, p});
        }

        vector<int> dist(n, INF);
        vector<vector<int>> parent(n);
        dijkstra(start, dist, graph, parent);

        solve(end, parent, graph);

        fill(dist.begin(), dist.end(), INF);
        dijkstra(start, dist, graph, parent);

        int result = dist[end];
        if (result == INF) {
            cout << -1 << endl;
        } else {
            cout << result << endl;
        }
    }
    return 0;
}