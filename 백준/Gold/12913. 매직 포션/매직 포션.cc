#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

const int MAX_N = 51;
const double INF = 1e9;

int N, K;
double dist[MAX_N][MAX_N];
double minDist[MAX_N][MAX_N];

struct State {
    int city, potions;
    double time;
    State(int c, int p, double t) : city(c), potions(p), time(t) {}
    bool operator>(const State& other) const {
        return time > other.time;
    }
};

double dijkstra() {
    priority_queue<State, vector<State>, greater<State>> pq;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j <= K; j++) {
            minDist[i][j] = INF;
        }
    }

    pq.push(State(0, K, 0));
    minDist[0][K] = 0;

    while (!pq.empty()) {
        State current = pq.top();
        pq.pop();

        int city = current.city;
        int potions = current.potions;
        double time = current.time;

        if (city == 1) return time;

        if (time > minDist[city][potions]) continue;

        for (int next = 0; next < N; next++) {
            if (next == city) continue;

            double newTime = time + dist[city][next];
            if (newTime < minDist[next][potions]) {
                minDist[next][potions] = newTime;
                pq.push(State(next, potions, newTime));
            }

            if (potions > 0) {
                newTime = time + dist[city][next] / 2;
                if (newTime < minDist[next][potions - 1]) {
                    minDist[next][potions - 1] = newTime;
                    pq.push(State(next, potions - 1, newTime));
                }
            }
        }
    }

    return -1;
}

int main() {
    cin >> N >> K;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            char c;
            cin >> c;
            dist[i][j] = c - '0';
        }
    }

    double result = dijkstra();
    cout << fixed << setprecision(1) << result << endl;

    return 0;
}