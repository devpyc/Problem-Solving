#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

struct State {
    int robot, box;
    int steps;
};

int32_t main() {
    string warehouse;
    cin >> warehouse;

    int robotPos = -1, boxPos = -1, targetPos = -1;
    for (int i = 0; i < 10; ++i) {
        if (warehouse[i] == '@') robotPos = i;
        else if (warehouse[i] == '#') boxPos = i;
        else if (warehouse[i] == '!') targetPos = i;
    }

    vector<int> directions = {-1, 1};
    unordered_set<int> visited;
    queue<State> q;

    q.push({robotPos, boxPos, 0});
    visited.insert(robotPos * 10 + boxPos);

    while (!q.empty()) {
        State current = q.front();
        q.pop();

        int robot = current.robot;
        int box = current.box;
        int steps = current.steps;

        if (box == targetPos) {
            cout << steps << endl;
            return 0;
        }

        for (int dir : directions) {
            int newRobot = robot + dir;
            if (newRobot < 0 || newRobot >= 10 || warehouse[newRobot] == '!') continue;

            if (newRobot == box) {
                int newBox = box + dir;
                if (newBox < 0 || newBox >= 10 || warehouse[newBox] == '@' || warehouse[newBox] == '#') continue;

                int newState = newRobot * 10 + newBox;
                if (visited.find(newState) == visited.end()) {
                    visited.insert(newState);
                    q.push({newRobot, newBox, steps + 1});
                }
            } else {
                int newState = newRobot * 10 + box;
                if (visited.find(newState) == visited.end()) {
                    visited.insert(newState);
                    q.push({newRobot, box, steps + 1});
                }
            }
        }
    }

    cout << -1 << endl;
    return 0;
}