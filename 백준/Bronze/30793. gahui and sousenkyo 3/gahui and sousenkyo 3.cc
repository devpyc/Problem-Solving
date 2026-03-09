#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int px, rx;
    cin >> px >> rx;

    double vx = (double)px / rx;

    if (vx < 0.2) {
        cout << "weak" << endl;
    } else if (vx < 0.4) {
        cout << "normal" << endl;
    } else if (vx < 0.6) {
        cout << "strong" << endl;
    } else {
        cout << "very strong" << endl;
    }

    return 0;
}