#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, Q;
    cin >> N >> Q;

    vector<bool> infected(N + 1, false);
    int healthy_count = N;

    for (int i = 0; i < Q; ++i) {
        int query, x;
        cin >> query;

        if (query == 1) {
            cin >> x;
            if (!infected[x]) {
                infected[x] = true;
                healthy_count--;
            }
        } else if (query == 2) {
            cin >> x;
            if (infected[x]) {
                infected[x] = false;
                healthy_count++;
            }
        } else if (query == 3) {
            cout << healthy_count << '\n';
        }
    }

    return 0;
}