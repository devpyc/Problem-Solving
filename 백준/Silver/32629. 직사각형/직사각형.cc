#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        ll n;
        cin >> n;

        ll sqrtN = floor(sqrt((double)n));

        ll h1 = (n + sqrtN -1) / sqrtN;
        ll p1 = 2 * (sqrtN + h1);

        ll w2 = sqrtN + 1;
        ll h2 = (n + w2 -1) / w2;
        ll p2 = 2 * (w2 + h2);

        ll ans = min(p1, p2);

        cout << ans << "\n";
    }
}