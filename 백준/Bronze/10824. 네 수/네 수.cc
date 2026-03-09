#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    
    string s1 = to_string(a) + to_string(b);
    string s2 = to_string(c) + to_string(d);

    long long result = stoll(s1) + stoll(s2);

    cout << result << '\n';

    return 0;
}