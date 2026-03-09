#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (a == b && b == c && c == d) {
        cout << "Fish At Constant Depth\n";
    } else if (a < b && b < c && c < d) {
        cout << "Fish Rising\n";
    } else if (a > b && b > c && c > d) {
        cout << "Fish Diving\n";
    } else {
        cout << "No Fish\n";
    }
}