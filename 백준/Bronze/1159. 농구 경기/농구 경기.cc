#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    map<char, int> count;
    for (int i = 0; i < n; ++i) {
        string name;
        cin >> name;
        count[name[0]]++;
    }

    vector<char> result;
    for (const auto& entry : count) {
        if (entry.second >= 5) {
            result.push_back(entry.first);
        }
    }

    if (result.empty()) {
        cout << "PREDAJA\n";
    } else {
        for (char c : result) {
            cout << c;
        }
        cout << "\n";
    }

    return 0;
}