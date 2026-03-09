#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, K;
    cin >> N >> K;

    vector<pair<int, int>> bids(N);

    for (int i = 0; i < N; ++i) {
        cin >> bids[i].first >> bids[i].second;
    }

    sort(bids.begin(), bids.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        return a.first < b.first;
    });

    int low = 0, high = 1e9;

    while (low < high) {
        int mid = (low + high + 1) / 2; // 중간값을 올림으로 계산

        int count = 0;
        int lastMaxBid = 0;

        for (int i = 0; i < N; ++i) {
            int newBid = max(bids[i].first, lastMaxBid) + mid;

            if (newBid > bids[i].second) {
                count++;
            }

            lastMaxBid = max(lastMaxBid, bids[i].first);
        }

        if (count >= K) {
            high = mid - 1;
        } else {
            low = mid;
        }
    }

    cout << low << "\n";

    return 0;
}