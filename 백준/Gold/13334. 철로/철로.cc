#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, d;
    cin >> n;
    vector<pair<int, int>> intervals(n);

    for (int i = 0; i < n; i++) {
        int h, o;
        cin >> h >> o;
        intervals[i] = {min(h, o), max(h, o)};
    }
    cin >> d;

    sort(intervals.begin(), intervals.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        return a.second < b.second;
    });

    priority_queue<int> pq;
    int maxCount = 0;

    for (auto& interval : intervals) {
        int start = interval.first;
        int end = interval.second;

        if (end - start <= d) {
            pq.push(-start);
        }

        while (!pq.empty() && -pq.top() + d < end) {
            pq.pop();
        }

        maxCount = max(maxCount, (int)pq.size());
    }
    cout << maxCount << endl;

    return 0;
}