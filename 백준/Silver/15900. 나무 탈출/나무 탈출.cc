#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> tree[500001];
bool visited[500001];
int n;

int dfs(int node, int depth) {
    visited[node] = true;
    bool isLeaf = true;
    int leafDepthCount = 0;

    for (int neighbor : tree[node]) {
        if (!visited[neighbor]) {
            isLeaf = false;
            leafDepthCount += dfs(neighbor, depth + 1);
        }
    }

    if (isLeaf) {
        return depth % 2 == 1 ? 1 : 0;
    }

    return leafDepthCount;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n - 1; i++) {
        int a, b;
        cin >> a >> b;
        tree[a].push_back(b);
        tree[b].push_back(a);
    }

    fill(visited, visited + n + 1, false);
    int winner = dfs(1, 0);

    if (winner % 2 == 1) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }

    return 0;
}