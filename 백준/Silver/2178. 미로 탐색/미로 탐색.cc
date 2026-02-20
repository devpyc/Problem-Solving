#include <bits/stdc++.h>
using namespace std;

int n,m;
int board[101][101];
int dist[101][101];
bool visited[101][101];

int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};

void bfs(int sx, int sy) {
    queue<pair<int,int>>q;
    q.push({sx,sy});

    visited[sx][sy]=true;
    dist[sx][sy]=1;

    while (!q.empty()) {
        int x=q.front().first;
        int y=q.front().second;

        q.pop();

        for (int i=0; i<4; i++) {
            int nx=x+dx[i];
            int ny=y+dy[i];

            if (nx>=1&&nx<=n&&ny>=1&&ny<=m) {
                if (!visited[nx][ny]&&board[nx][ny]==1) {
                    visited[nx][ny]=true;
                    dist[nx][ny]=dist[x][y]+1;
                    q.push({nx,ny});
                }
            }
        }
    }
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    cin>>n>>m;

    for (int i=1; i<=n; i++) {
        string s;
        cin>>s;

        for (int j=1; j<=m; j++) {
            board[i][j]=s[j-1]-'0';
        }
    }

    bfs(1,1);
    
    cout<<dist[n][m];
}