#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    long long s = 0;

    for (int a = 0; a <= n; a++) {
        for (int b = a; b <= n; b++) {
            s += (a + b);
        }
    }

    cout << s << "\n";
}