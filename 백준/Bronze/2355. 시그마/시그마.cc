#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

int main() {
    ll A, B;
    cin >> A >> B;
    ll sum = 0;
    if (A <= B) {
        sum = (A + B) * (B - A + 1) / 2;
    } else {
        sum = (B + A) * (A - B + 1) / 2;
    }
    cout << sum << endl;
    return 0;
}