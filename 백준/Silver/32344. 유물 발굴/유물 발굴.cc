#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int R, C, N;
    cin >> R >> C >> N;

    vector<int> minV(N+1, R+1);
    vector<int> maxV(N+1, 0);
    vector<int> minH(N+1, C+1);
    vector<int> maxH(N+1, 0);
    vector<bool> has_piece(N+1, false);

    for(int i=0; i<N; ++i){
        int a, v, h;
        cin >> a >> v >> h;
        has_piece[a] = true;
        minV[a] = min(minV[a], v);
        maxV[a] = max(maxV[a], v);
        minH[a] = min(minH[a], h);
        maxH[a] = max(maxH[a], h);
    }

    int best_num = -1;
    ll best_size = -1;

    for(int a=1; a<=N; ++a){
        if(has_piece[a]){
            int height = maxV[a] - minV[a] + 1;
            int width = maxH[a] - minH[a] + 1;
            ll size = (ll)height * width;
            if(size > best_size || (size == best_size && a < best_num)){
                best_size = size;
                best_num = a;
            }
        }
    }

    cout << best_num << " " << best_size;
}