#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

vector<int> cal(const vector<int>& A) {
    int n = A.size();
    vector<int> B(n, 0);
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (A[j] > A[i]) B[i]++;
        }
    }
    return B;
}

bool isSame(const vector<int>& A, const vector<int>& B) {
    return A == B;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> A(n);
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    set<vector<int>> seen;
    int cnt = 0;

    while (true) {
        if (seen.find(A) != seen.end()) {
            cout << -1 << endl;
            return 0;
        }

        seen.insert(A);
        vector<int> B = cal(A);
        cnt++;

        if (isSame(A, B)) {
            cout << cnt << endl;
            return 0;
        }

        A = B;
    }
}