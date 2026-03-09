// 진짜 집에 가고 싶어 !!

#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

struct Edge {
    int to, time, interval;
    Edge(int t, int tm, int i) : to(t), time(tm), interval(i) {}
};

struct Node {
    int vertex, time;
    Node(int v, int t) : vertex(v), time(t) {}
    bool operator>(const Node& other) const {
        return time > other.time;
    }
};

vector<vector<Edge>> graph;
vector<int> dist;

int dijkstra(int N) {
    priority_queue<Node, vector<Node>, greater<Node>> pq;
    dist.assign(N + 1, INT_MAX);

    dist[1] = 0;
    pq.push(Node(1, 0));

    while (!pq.empty()) {
        int cur = pq.top().vertex;
        int cur_time = pq.top().time;
        pq.pop();

        if (cur == N) return cur_time;
        if (cur_time > dist[cur]) continue;

        for (const Edge& e : graph[cur]) {
            int wait_time = (e.interval - (cur_time % e.interval)) % e.interval;
            int next_time = cur_time + wait_time + e.time;

            if (next_time < dist[e.to]) {
                dist[e.to] = next_time;
                pq.push(Node(e.to, next_time));
            }
        }
    }

    return -1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin >> n >> m;

    graph.resize(n + 1);

    for (int i = 0; i < m; i++) {
        int A, B, T, W;
        cin >> A >> B >> T >> W;
        graph[A].emplace_back(B, T, W);
    }

    int result = dijkstra(n);
    cout << result << endl;

    return 0;
}