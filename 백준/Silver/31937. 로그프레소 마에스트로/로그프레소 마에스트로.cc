#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

struct LogEntry {
    int time;
    int sender;
    int receiver;
};

bool compareLogs(const LogEntry& a, const LogEntry& b) {
    return a.time < b.time;
}

int32_t main() {
    int N, M, K;
    cin >> N >> M >> K;

    set<int> infectedComputers;
    for (int i = 0; i < K; ++i) {
        int infected;
        cin >> infected;
        infectedComputers.insert(infected);
    }

    vector<LogEntry> logs(M);
    for (int i = 0; i < M; ++i) {
        cin >> logs[i].time >> logs[i].sender >> logs[i].receiver;
    }

    sort(logs.begin(), logs.end(), compareLogs);

    for (int i = 1; i <= N; ++i) {
        set<int> currentlyInfected;
        currentlyInfected.insert(i);

        for (const auto& log : logs) {
            if (currentlyInfected.find(log.sender) != currentlyInfected.end()) {
                currentlyInfected.insert(log.receiver);
            }
        }

        bool allInfectedMatch = true;
        for (int infected : infectedComputers) {
            if (currentlyInfected.find(infected) == currentlyInfected.end()) {
                allInfectedMatch = false;
                break;
            }
        }

        if (allInfectedMatch && currentlyInfected.size() == infectedComputers.size()) {
            cout << i << endl;
            break;
        }
    }

    return 0;
}