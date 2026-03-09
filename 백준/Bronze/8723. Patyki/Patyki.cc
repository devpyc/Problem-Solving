#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int s[3] = {a, b, c};
    sort(s, s + 3);

    a = s[0];
    b = s[1];
    c = s[2];

    if (a + b <= c) {
        cout << 0 << endl;
    } else {
        if (a == b && b == c) {
            cout << 2 << endl;
        }
        else if (a * a + b * b == c * c) {
            cout << 1 << endl;
        }
        else {
            cout << 0 << endl;
        }
    }

    return 0;
}