#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<string> castle(N);
    for (int i = 0; i < N; ++i) {
        cin >> castle[i];
    }

    vector<bool> row(N, false);
    vector<bool> col(M, false);

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            if (castle[i][j] == 'X') {
                row[i] = true;
                col[j] = true;
            }
        }
    }

    int rcnt = 0;
    int ccnt = 0;

    for (int i = 0; i < N; ++i) {
        if (!row[i]) {
            rcnt++;
        }
    }

    for (int j = 0; j < M; ++j) {
        if (!col[j]) {
            ccnt++;
        }
    }

    int result = max(rcnt, ccnt);
    cout << result << endl;

    return 0;
}