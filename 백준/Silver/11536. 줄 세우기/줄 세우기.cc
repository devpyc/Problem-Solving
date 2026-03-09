#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define fi first
#define se second
#define endl "\n"
#define pii pair<int,int>
#define vi vector<int>
#define vvi vector<vector<int>>
#define vvvi vector<vector<vector<int>>>
#define io ios_base::sync_with_stdio(false); cin.tie(nullptr)
using namespace std;

int32_t main() {
    io;
    int n;
    cin >> n;
    vector<string> s(n);

    for (int i = 0; i < n; ++i) {
        cin >> s[i];
    }

    bool in = true;
    bool de = true;

    for (int i = 1; i < n; ++i) {
        if (s[i] > s[i - 1]) {
            de = false;
        } else if (s[i] < s[i - 1]) {
            in = false;
        }
    }

    if (in) {
        cout << "INCREASING" << endl;
    } else if (de) {
        cout << "DECREASING" << endl;
    } else {
        cout << "NEITHER" << endl;
    }

    return 0;
}