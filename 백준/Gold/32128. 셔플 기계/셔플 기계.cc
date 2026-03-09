#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

void apply(const vector<int>& shuffle, vector<int>& cards, int times) {
    int n = shuffle.size();
    vector<bool> visited(n, false);

    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            vector<int> cycle;
            int current = i;
            while (!visited[current]) {
                visited[current] = true;
                cycle.push_back(current);
                current = shuffle[current] - 1;
            }

            int cycle_len = cycle.size();
            int actual_times = times % cycle_len;

            vector<int> temp_cycle(cycle_len);
            for (int j = 0; j < cycle_len; j++) {
                temp_cycle[j] = cards[cycle[j]];
            }

            for (int j = 0; j < cycle_len; j++) {
                cards[cycle[(j + actual_times) % cycle_len]] = temp_cycle[j];
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M, K;
    cin >> N >> M >> K;

    vector<vector<int>> shuffle(M, vector<int>(N));

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cin >> shuffle[i][j];
        }
    }

    vector<int> card(N);
    for (int i = 0; i < N; i++) {
        card[i] = i + 1;
    }

    for (int i = 0; i < K; i++) {
        int X, Y;
        cin >> X >> Y;
        X--;
        apply(shuffle[X], card, Y);
    }

    for (int i = 0; i < N; i++) {
        cout << card[i] << " ";
    }
    cout << endl;

    return 0;
}