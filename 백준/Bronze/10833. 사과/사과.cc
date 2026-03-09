#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, s;
    int a, b;
    s = 0;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> a >> b;
        s += b % a;
    }

    cout << s;
}