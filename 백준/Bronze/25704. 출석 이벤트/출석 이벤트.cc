#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, p;
    cin >> n >> p;
    
    int d = p;
    
    if (n >= 5) {
        d = min(d, p - 500);
    }
    if (n >= 10) {
        d = min(d, p - (p / 10));
    }
    if (n >= 15) {
        d = min(d, p - 2000);
    }
    if (n >= 20) {
        d = min(d, p - (p / 4));
    }
    
    cout << max(0, d) << endl;
    
    return 0;
}