#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int a, b;
        cin >> a >> b;

        int g = gcd(a, b);
        int l = lcm(a, b);

        cout << l << " " << g << endl;
    }
    return 0;
}