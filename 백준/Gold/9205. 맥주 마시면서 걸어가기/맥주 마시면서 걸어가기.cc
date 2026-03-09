#include <bits/stdc++.h>
#define endl "\n"
#define io ios_base::sync_with_stdio(false);cin.tie(nullptr);
using namespace std;

struct Point {
    int x, y;
};

int distance(Point a, Point b) {
    return abs(a.x - b.x) + abs(a.y - b.y);
}

int main() {
    io;
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<Point> points(n + 2);
        for (int i = 0; i < n + 2; i++) {
            cin >> points[i].x >> points[i].y;
        }

        vector<vector<bool>> beer(n + 2, vector<bool>(n + 2, false));

        for (int i = 0; i < n + 2; i++) {
            for (int j = 0; j < n + 2; j++) {
                if (distance(points[i], points[j]) <= 1000) {
                    beer[i][j] = true;
                }
            }
        }

        for (int k = 0; k < n + 2; k++) {
            for (int i = 0; i < n + 2; i++) {
                for (int j = 0; j < n + 2; j++) {
                    beer[i][j] = beer[i][j] || (beer[i][k] && beer[k][j]);
                }
            }
        }

        if (beer[0][n + 1]) {
            cout << "happy" << endl;
        } else {
            cout << "sad" << endl;
        }
    }

    return 0;
}