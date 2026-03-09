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
#define io ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
using namespace std;
bool check(int num) {
    string numStr = to_string(num);
    return numStr.find('7') != string::npos;
}

int main() {
    io;
    int n;
    cin >> n;

    if (check(n)) {
        if (n % 7 != 0) {
            cout << 2 << endl;
        } else {
            cout << 3 << endl;
        }
    } else {
        if (n % 7 != 0) {
            cout << 0 << endl;
        } else {
            cout << 1 << endl;
        }
    }
    return 0;
}