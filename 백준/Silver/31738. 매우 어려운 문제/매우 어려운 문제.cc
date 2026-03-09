#include <iostream>
#define ll long long
using namespace std;


ll modFactorial(ll n, ll m) {
    if (n >= m) {
        return 0;
    }

    ll result = 1;
    for (ll i = 2; i <= n; i++) {
        result = (result * i) % m;
    }
    return result;
}

int main() {
    ll n, m;
    cin >> n >> m;
    cout << modFactorial(n, m) << endl;
    return 0;
}