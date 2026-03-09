#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> matrices(n);

    for (int i = 0; i < n; ++i) {
        cin >> matrices[i].first >> matrices[i].second;
    }

    vector<vector<int>> dp(n, vector<int>(n, INT_MAX));

    // 행렬 크기가 1인 경우, 곱셈 횟수는 0
    for (int i = 0; i < n; ++i) {
        dp[i][i] = 0;
    }

    // 연쇄 행렬 곱셈을 위한 동적 프로그래밍
    for (int len = 1; len < n; ++len) {
        for (int i = 0; i + len < n; ++i) {
            int j = i + len;
            for (int k = i; k < j; ++k) {
                dp[i][j] = min(dp[i][j], dp[i][k] + dp[k + 1][j] + matrices[i].first * matrices[k].second * matrices[j].second);
            }
        }
    }
    cout << dp[0][n - 1] << endl;

    return 0;
}