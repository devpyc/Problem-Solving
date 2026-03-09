#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int N, M, K1, K2;
vector<vector<char>> grd;
vector<pair<int, int>> nds;
pair<int, int> bas;

int cal(const vector<int>& act) {
    if (act.empty()) return 0;

    int P = 0;
    int mx = N, my = N, Mx = 0, My = 0;

    for (int i : act) {
        int x = nds[i].first, y = nds[i].second;
        P += abs(x - bas.first) + abs(y - bas.second);
        mx = min(mx, x);
        my = min(my, y);
        Mx = max(Mx, x);
        My = max(My, y);
    }

    int U = (Mx - mx + 1) * (My - my + 1);
    return max(P - U, 0);
}

int per(int K) {
    int mxp = 0;
    vector<int> cmb(M, 0);
    fill(cmb.end() - K, cmb.end(), 1);

    do {
        vector<int> act;
        for (int i = 0; i < M; ++i) {
            if (cmb[i]) act.push_back(i);
        }
        mxp = max(mxp, cal(act));
    } while (next_permutation(cmb.begin(), cmb.end()));

    return mxp;
}

int main() {
    cin >> N >> M >> K1 >> K2;

    grd.resize(N, vector<char>(N));
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> grd[i][j];
            if (grd[i][j] == 'B') bas = {i, j};
            else if (grd[i][j] == 'N') nds.push_back({i, j});
        }
    }

    cout << per(K1) << endl;
    cout << per(K2) << endl;

    return 0;
}