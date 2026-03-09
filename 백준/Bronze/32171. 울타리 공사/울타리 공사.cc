#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int x1 = INT_MAX, y1 = INT_MAX, x2 = INT_MIN, y2 = INT_MIN;
    for (int i = 0; i < n; ++i) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        x1 = min(x1, a);
        y1 = min(y1, b);
        x2 = max(x2, c);
        y2 = max(y2, d);
        cout << 2 * (x2 - x1 + y2 - y1) << endl;
    }
    return 0;
}