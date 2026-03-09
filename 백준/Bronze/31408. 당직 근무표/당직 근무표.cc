#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> duty(N), result(N);
    for (int i = 0; i < N; ++i) {
        cin >> duty[i];
    }
    
    unordered_map<int, int> freq;
    for (int i = 0; i < N; ++i) {
        freq[duty[i]]++;
    }
    
    vector<pair<int, int>> freqSorted;
    for (const auto& p : freq) {
        freqSorted.push_back({p.second, p.first});
    }
    sort(freqSorted.rbegin(), freqSorted.rend());
    
    int maxDuty = freqSorted[0].first;
    if (maxDuty > (N + 1) / 2) {
        cout << "NO" << endl;
        return 0;
    }

    int index = 0;
    for (const auto& p : freqSorted) {
        int count = p.first, soldier = p.second;
        for (int i = 0; i < count; ++i) {
            if (index >= N) index = 1;
            result[index] = soldier;
            index += 2;
        }
    }

    cout << "YES" << endl;
    return 0;
}