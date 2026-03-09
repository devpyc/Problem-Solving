#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
    getline(cin, s);

    int a = s[0] - '0';
    int b = s[4] - '0';
    int c = s[8] - '0';
    
    if (a + b == c) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}