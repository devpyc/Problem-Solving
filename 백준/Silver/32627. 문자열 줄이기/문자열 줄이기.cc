#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;

    string S;
    cin >> S;

    vector<vector<int>> positions(26, vector<int>());
    for(int i=0; i<N; ++i){
        char c = S[i];
        positions[c - 'a'].push_back(i);
    }

    vector<int> cur(26, 0);
    vector<bool> r(N, false);

    for(int m=0; m<M; ++m){
        for(int c=0; c<26; ++c){
            if(cur[c] < positions[c].size()){
                int idx = positions[c][cur[c]];
                r[idx] = true;
                cur[c]++;
                break;
            }
        }
    }

    string ans;
    ans.reserve(N - M);
    for(int i=0; i<N; ++i){
        if(!r[i]){
            ans += S[i];
        }
    }

    cout << ans;
}