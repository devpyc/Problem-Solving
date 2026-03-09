#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define pb push_back
#define pob pop_back
#define pf push_front
#define pof pop_front
#define pi pair<int, int>
#define mi map<int, int>
#define qi queue<int>
#define di deque<int>
#define vi vector<int>
#define vvi vector<vector<int>>
#define endl "\n"
#define io ios_base::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

int ctoi(char c) {
    if (c >= '0' && c <= '9') return c - '0';
    return c - 'A' + 10;
}

char itoc(int i) {
    if (i >= 0 && i <= 9) return i + '0';
    return i - 10 + 'A';
}

ll to(string n, int x) {
    ll result = 0;
    for (char c : n) {
        result = result * x + ctoi(c);
    }
    return result;
}

string from(ll n, int y) {
    if (n == 0) return "0";
    string result;
    while (n > 0) {
        result.pb(itoc(n % y));
        n /= y;
    }
    reverse(result.begin(), result.end());
    return result;
}

int main() {
    io;
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        string z;
        cin >> x >> y >> z;

        cout << from((ll)to(z,x), y) << endl;
    }
    return 0;
}