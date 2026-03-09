#include <bits/stdc++.h>
#define pob pop_back
#define pub push_back
#define endl "\n"
using namespace std;

int n;
vector<int> v;

bool check(int len) {
    int size = v.size();
    for (int i = 1; i <= len / 2; i++) {
        bool flag = true;
        for (int j = 0; j < i; j++) {
            if (v[size - 1 - j] != v[size - 1 - i - j]) {
                flag = false;
                break;
            }
        }
        if (flag) return false;
    }
    return true;
}

bool dfs(int len) {
    if (!check(len)) return false;
    if (len == n) {
        for (int i = 0; i < n; i++) {
            cout << v[i];
        }
        return true;
    }
    for (int i = 1; i <= 3; i++) {
        v.pub(i);
        if (dfs(len + 1)) return true;
        v.pob();
    }
    return false;
}

int main() {
    cin >> n;
    dfs(0);
}