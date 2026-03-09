#include <bits/stdc++.h>
using namespace std;

void bfs(int start, int end) {
    queue<int> q;
    q.push(start);
    unordered_map<int, int> visited;
    visited[start] = 0;

    while (!q.empty()) {
        int cur = q.front();
        q.pop();

        if (cur == end) {
            cout << visited[cur] << endl;
            return;
        }

        int next = cur + 1;
        if (visited.find(next) == visited.end()) {
            q.push(next);
            visited[next] = visited[cur] + 1;
        }

        if (cur != 0) {
            next = cur - 1;
            if (visited.find(next) == visited.end()) {
                q.push(next);
                visited[next] = visited[cur] + 1;
            }
        }

        for (int i = 1; i <= (cur >> 1); i = i << 1) {
            next = cur ^ i;
            if (visited.find(next) == visited.end()) {
                q.push(next);
                visited[next] = visited[cur] + 1;
            }
        }
    }
}

int binary(const string &str) {
    int result = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '1') {
            result += pow(2, str.length() - 1 - i);
        }
    }
    return result;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string l, k;
    cin >> l >> k;

    bfs(binary(l), binary(k));

    return 0;
}