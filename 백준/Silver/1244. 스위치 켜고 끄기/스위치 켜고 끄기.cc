#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define pb push_back
#define pi pair<int, int>
#define mi map<int, int>
#define qi queue<int>
#define vi vector<int>
#define vvi vector<vector<int>>
#define endl "\n"
#define elif else if
#define io ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
using namespace std;

void state(vi &switches, int index) {
    switches[index] = !switches[index];
}

int main() {
    io;
    int n;
    cin >> n;

    vi s(n);
    for (int i = 0; i < n; ++i) {
        cin >> s[i];
    }

    int cnt;
    cin >> cnt;

    for (int i = 0; i < cnt; ++i) {
        int gender, num;
        cin >> gender >> num;

        if (gender == 1) {
            for (int j = num - 1; j < n; j += num) {
                state(s, j);
            }
        } elif (gender == 2) {
            int left = num - 1;
            int right = num - 1;
            while (left > 0 && right < n - 1 && s[left - 1] == s[right + 1]) {
                --left;
                ++right;
            }
            for (int j = left; j <= right; ++j) {
                state(s, j);
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        cout << s[i] << " ";
        if ((i + 1) % 20 == 0) cout << endl;
    }

    return 0;
}