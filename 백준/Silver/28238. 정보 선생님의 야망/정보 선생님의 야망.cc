#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<vector<int>> arr(n, vector<int>(5));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 5; j++) {
            cin >> arr[i][j];
        }
    }

    int ans = 0;
    int d1 = 0, d2 = 1;

    for(int i = 0; i < 5; i++) {
        for(int j = i + 1; j < 5; j++) {
            int cnt = 0;
            for(int k = 0; k < n; k++) {
                if(arr[k][i] == 1 && arr[k][j] == 1) {
                    cnt++;
                }
            }

            if(cnt > ans) {
                ans = cnt;
                d1 = i;
                d2 = j;
            }
        }
    }

    cout << ans << "\n";

    for(int i = 0; i < 5; i++) {
        if(i == d1 || i == d2) {
            cout << "1";
        } else {
            cout << "0";
        }
        if(i < 4) cout << " ";
    }
}