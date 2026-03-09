#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

const int MAX = 101;
vector<int> graph[MAX];
int visited[MAX];

int bfs(int start, int end) {
    queue<pair<int, int>> q;
    q.push({start, 0});
    visited[start] = true;

    while (!q.empty()) {
        int node = q.front().first;
        int dist = q.front().second;
        q.pop();

        if (node == end) {
            return dist;
        }

        for (int i = 0; i < graph[node].size(); i++) {
            int next = graph[node][i];
            if (!visited[next]) {
                q.push({next, dist + 1});
                visited[next] = true;
            }
        }
    }

    return -1;
}

int main() {
    int n, start, end, m;
    cin >> n >> start >> end >> m;

    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }

    int result = bfs(start, end);
    cout << result << endl;

    return 0;
}