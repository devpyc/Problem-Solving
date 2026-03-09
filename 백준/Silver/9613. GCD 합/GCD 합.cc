#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int t = a % b;
        a = b;
        b = t;
    }
    return a;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[100];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        long long s = 0;
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                s += gcd(a[i], a[j]);
            }
        }
        cout << s << "\n";
    }
}