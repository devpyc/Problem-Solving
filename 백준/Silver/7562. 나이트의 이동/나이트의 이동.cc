#include <bits/stdc++.h>
using namespace std;

int d[8][2] = {{-2,-1},{-2,1},{-1,-2},{-1,2},{1,-2},{1,2},{2,-1},{2,1}};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while(t--) {
        int l;
        cin >> l;
        
        int a[300][300] = {0,};
        bool v[300][300] = {0,};
        queue<pair<int,int>> q;
        
        int x, y, r, c;
        cin >> x >> y >> r >> c;
        
        q.push({x,y});
        v[x][y] = 1;
        
        while(!q.empty()) {
            int i = q.front().first;
            int j = q.front().second;
            q.pop();
            
            if(i == r && j == c) {
                cout << a[i][j] << '\n';
                break;
            }
            
            for(int k = 0; k < 8; k++) {
                int n = i + d[k][0];
                int m = j + d[k][1];
                
                if(n < 0 || n >= l || m < 0 || m >= l) continue;
                if(v[n][m]) continue;
                
                v[n][m] = 1;
                a[n][m] = a[i][j] + 1;
                q.push({n,m});
            }
        }
    }
    return 0;
}