#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    int u, v;
    cin >> u >> v;

    vector<string> board(u);
    for(int i = 0; i < u; i++){
        cin >> board[i];
    }

    string s;
    cin >> s;

    vector<string> res(n, string(m, ' '));

    auto clamp_to_edge = [&](int i, int j){
        int r = min(i, u-1);
        int c = min(j, v-1);
        return board[r][c];
    };

    auto repeat_mode = [&](int i, int j){
        int r = i % u;
        int c = j % v;
        return board[r][c];
    };

    auto mirrored_repeat = [&](int i, int j){
        int br = i / u;
        int bc = j / v;
        int ibR = i % u;
        int ibC = j % v;

        int r = (br % 2 == 0) ? ibR : (u - 1 - ibR);
        int c = (bc % 2 == 0) ? ibC : (v - 1 - ibC);
        return board[r][c];
    };

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(s == "clamp-to-edge"){
                res[i][j] = clamp_to_edge(i, j);
            } else if(s == "repeat"){
                res[i][j] = repeat_mode(i, j);
            } else {
                res[i][j] = mirrored_repeat(i, j);
            }
        }
    }

    for(int i = 0; i < n; i++){
        cout << res[i] << "\n";
    }
}