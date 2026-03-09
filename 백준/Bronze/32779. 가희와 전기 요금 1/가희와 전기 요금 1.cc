#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        ll a, m;
        cin >> a >> m;

        ll x = a * m * 1056;
        ll y = 600000;
        ll ans = x / y;

        cout << ans << "\n";
    }
}