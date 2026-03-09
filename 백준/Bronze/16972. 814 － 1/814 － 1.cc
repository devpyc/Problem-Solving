#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    
    const int N = 814, S = 581, D = 580;

    vector<pair<int,int>> pts;
    pts.reserve(N);

    pts.emplace_back(0, 0);
    pts.emplace_back(D, 0);

    for(int ry = 0; ry < 29 && (int)pts.size() < N; ry++){
        for(int cx = 0; cx < 29 && (int)pts.size() < N; cx++){
            int x = -8140 + S * cx;
            int y = -8140 + S * ry;
            long long dx1 = x,     dy1 = y;
            long long dx2 = x - D, dy2 = y;
            if (dx1*dx1 + dy1*dy1 <= 1LL*D*D) continue;
            if (dx2*dx2 + dy2*dy2 <= 1LL*D*D) continue;
            pts.emplace_back(x, y);
        }
    }

    for(auto &p : pts){
        cout << p.first << " " << p.second << "\n";
    }
    return 0;
}