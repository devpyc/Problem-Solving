#include <bits/stdc++.h>
using namespace std;

map<long long, long long> heights;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int Q;
    cin >> Q;

    for (int q = 0; q < Q; ++q) {
        int type;
        long long i;
        cin >> type >> i;

        if (type == 1) {
            long long max_height = 0;
            for (long long x = i; x < i + 4; ++x) {
                max_height = max(max_height, heights[x]);
            }
            for (long long x = i; x < i + 4; ++x) {
                heights[x] = max_height + 1;
            }
        } else if (type == 2) {
            long long max_height = heights[i];
            heights[i] = max_height + 4;
        } else if (type == 3) {
            cout << heights[i] << '\n';
        }
    }

    return 0;
}