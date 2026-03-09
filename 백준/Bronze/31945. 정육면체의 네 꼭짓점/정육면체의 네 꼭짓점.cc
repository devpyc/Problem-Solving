#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

struct Point {
    int x, y, z;
};

Point points[8] = {
        {0, 0, 0},
        {0, 0, 1},
        {0, 1, 0},
        {0, 1, 1},
        {1, 0, 0},
        {1, 0, 1},
        {1, 1, 0},
        {1, 1, 1}
};

bool isFace(int a, int b, int c, int d) {
    vector<int> xs = {points[a].x, points[b].x, points[c].x, points[d].x};
    vector<int> ys = {points[a].y, points[b].y, points[c].y, points[d].y};
    vector<int> zs = {points[a].z, points[b].z, points[c].z, points[d].z};
    
    if (all_of(xs.begin(), xs.end(), [&](int x) { return x == xs[0]; })) return true;
    if (all_of(ys.begin(), ys.end(), [&](int y) { return y == ys[0]; })) return true;
    if (all_of(zs.begin(), zs.end(), [&](int z) { return z == zs[0]; })) return true;

    return false;
}

int32_t main() {
    int T;
    cin >> T;

    while (T--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        if (isFace(a, b, c, d)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}