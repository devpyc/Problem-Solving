#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int n, s;
int arr[21];
int cnt = 0;

void dfs(int idx, int sum) {
    if (idx == n) {
        if (sum == s) {
            cnt++;
        }
        return;
    }
    dfs(idx + 1, sum + arr[idx]);
    dfs(idx + 1, sum);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> n >> s;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    dfs(0, 0);
    if (s == 0) {
        cnt--;
    }
    cout << cnt;
}