#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>

using namespace std;

int main() {
    int N;
    cin >> N;

    unordered_map<string, vector<string>> ring_map;

    for (int i = 0; i < N; ++i) {
        string name, ring_feature;
        cin >> name >> ring_feature;

        if (ring_feature != "-") {
            ring_map[ring_feature].push_back(name);
        }
    }

    vector<pair<string, string>> couples;

    for (const auto& entry : ring_map) {
        if (entry.second.size() == 2) {
            couples.push_back({entry.second[0], entry.second[1]});
        }
    }

    cout << couples.size() << endl;
    for (const auto& couple : couples) {
        cout << couple.first << " " << couple.second << endl;
    }

    return 0;
}