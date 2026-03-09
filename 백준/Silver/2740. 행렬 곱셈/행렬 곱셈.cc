#include <bits/stdc++.h>
#define endl "\n"
#define io ios_base::sync_with_stdio(false);cin.tie(nullptr);
using namespace std;

int main() {
    io;
    int N, M, K;

    cin >> N >> M;
    vector<vector<int>> A(N, vector<int>(M));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> A[i][j];
        }
    }

    cin >> M >> K;
    vector<vector<int>> B(M, vector<int>(K));
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < K; j++) {
            cin >> B[i][j];
        }
    }

    vector<vector<int>> C(N, vector<int>(K, 0));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < K; j++) {
            for (int k = 0; k < M; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < K; j++) {
            cout << C[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}