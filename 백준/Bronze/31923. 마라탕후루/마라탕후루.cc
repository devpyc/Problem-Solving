#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

bool canBalance(int N, int P, int Q, vector<int>& A, vector<int>& B, vector<int>& K) {
    int D = P - Q;
    if (D == 0) {
        for (int i = 0; i < N; ++i) {
            if (A[i] != B[i]) {
                return false;
            }
            K[i] = 0;
        }
    } else {
        for (int i = 0; i < N; ++i) {
            int diff = B[i] - A[i];
            if (diff % D != 0) {
                return false;
            }
            K[i] = diff / D;
            if (K[i] < 0 || K[i] > 10000) {
                return false;
            }
        }
    }
    return true;
}

int32_t main() {
    int N, P, Q;
    cin >> N >> P >> Q;
    vector<int> A(N), B(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    for (int i = 0; i < N; ++i) {
        cin >> B[i];
    }

    vector<int> K(N);
    if (canBalance(N, P, Q, A, B, K)) {
        cout << "YES" << endl;
        for (int i = 0; i < N; ++i) {
            cout << K[i] << " ";
        }
        cout << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}