#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
#define io ios_base::sync_with_stdio(false);cin.tie(nullptr);
using namespace std;

int main() {
    io;
    int n, k;
    cin >> n >> k;

    int st[2][6] = {0};

    for (int i = 0; i < n; ++i) {
        int gen, gra;
        cin >> gen >> gra;
        st[gen][gra - 1]++;
    }

    int cnt = 0;

    for (int gen = 0; gen < 2; ++gen) {
        for (int gra = 0; gra < 6; ++gra) {
            if (st[gen][gra] > 0) {
                cnt += (st[gen][gra] + k - 1) / k;
            }
        }
    }

    cout << cnt << endl;

    return 0;
}