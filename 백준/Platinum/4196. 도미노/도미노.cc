#include <bits/stdc++.h>
#define MAX 100001
using namespace std;

int v,e;
int scc_cnt;
bool visited[MAX];
int scc_id[MAX];
int in_degree[MAX];

vector<int> order;
vector<int> graph[MAX];
vector<int> rev_graph[MAX];
vector<int> SCC[MAX];


void dfs(int node) {
    visited[node] = true;
    for (int next : graph[node]) {
        if (!visited[next]) {
            dfs(next);
        }
    }
    order.push_back(node);
}

void rev_dfs(int node) {
    visited[node] = true;
    SCC[scc_cnt].push_back(node);
    scc_id[node] = scc_cnt;
    for (int next : rev_graph[node]) {
        if (!visited[next]) {
            rev_dfs(next);
        }
    }
}

void solve() {
    cin >> v >> e;

    for (int i = 1; i <= v; i++) {
        graph[i].clear();
        rev_graph[i].clear();
    }
    order.clear();
    for (int i = 0; i < MAX; i++) {
        SCC[i].clear();
    }
    memset(visited, false, sizeof(visited));
    memset(scc_id, 0, sizeof(scc_id));
    memset(in_degree, 0, sizeof(in_degree));
    scc_cnt = 0;

    for (int i = 0; i < e; i++) {
        int x, y;
        cin >> x >> y;
        graph[x].push_back(y);
        rev_graph[y].push_back(x);
    }

    for (int i = 1; i <= v; i++) {
        if (!visited[i]) {
            dfs(i);
        }
    }

    reverse(order.begin(), order.end());

    memset(visited, false, sizeof(visited));

    for (int node : order) {
        if (!visited[node]) {
            rev_dfs(node);
            scc_cnt++;
        }
    }

    for (int i = 1; i <= v; i++) {
        for (int next : graph[i]) {
            if (scc_id[i] != scc_id[next]) {
                in_degree[scc_id[next]]++;
            }
        }
    }

    int result = 0;
    for (int i = 0; i < scc_cnt; i++) {
        if (in_degree[i] == 0) {
            result++;
        }
    }

    cout << result << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}