#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for (int i = 0; i < 3; i++) {
        ll a;
        ll s = 0;
        int n, cnt = 0;
        cin >> n;
        while (n--) {
            cin >> a;
            ll tmp = s;
            s += a;
            if (a > 0 && tmp > 0 && s < 0){
                cnt++;
            }
            if (a < 0 && tmp < 0 && s > 0){
                cnt--;
            }
        }
        if (cnt == 0) {
            if (s == 0){
                cout << 0 << endl;
            }
            else{
                cout << (s > 0 ? '+' : '-') << endl;
            }
        }
        else{
            cout << (cnt > 0 ? '+' : '-') << endl;
        }
    }
}