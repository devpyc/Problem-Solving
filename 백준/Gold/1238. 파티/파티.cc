#include <iostream>
#include <vector>
#include <queue>
#include <limits>

using namespace std;

struct Edge {
    int to;
    int weight;
};

const int INF = numeric_limits<int>::max();

vector<vector<Edge>> graph;

vector<int> dijkstra(int start, int n) {
    vector<int> distance(n + 1, INF);
    distance[start] = 0;

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, start});

    while (!pq.empty()) {
        int dist = pq.top().first;
        int current = pq.top().second;
        pq.pop();

        if (distance[current] < dist) {
            continue;
        }

        for (const Edge& edge : graph[current]) {
            int next = edge.to;
            int cost = edge.weight + dist;

            if (cost < distance[next]) {
                distance[next] = cost;
                pq.push({cost, next});
            }
        }
    }

    return distance;
}

int main() {
    int n, m, x;
    cin >> n >> m >> x;

    // 그래프 초기화
    graph.resize(n + 1);

    // 간선 정보 입력
    for (int i = 0; i < m; ++i) {
        int from, to, weight;
        cin >> from >> to >> weight;
        graph[from].push_back({to, weight});
    }

    // 각각의 학생들이 X로 가는 최단 거리와 X에서 각 학생으로 가는 최단 거리 계산
    vector<int> fromX = dijkstra(x, n);

    int maxDistance = 0;

    for (int i = 1; i <= n; ++i) {
        if (i == x) continue;

        // X에서 각 학생으로 가는 최단 거리 계산
        vector<int> toX = dijkstra(i, n);

        // 학생들이 X로 가는데 걸리는 시간 계산
        maxDistance = max(maxDistance, fromX[i] + toX[x]);
    }

    cout << maxDistance << endl;

    return 0;
}