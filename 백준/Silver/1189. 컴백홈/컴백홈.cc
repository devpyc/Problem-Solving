#include <bits/stdc++.h>
using namespace std;

int r, c, k;
char board[5][5];
bool visited[5][5];
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};
int answer = 0;

void dfs(int x, int y, int dist) {
    if(x == 0 && y == c-1) {
        if(dist == k) {
            answer++;
        }
        return;
    }
    
    for(int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        
        if(nx >= 0 && nx < r && ny >= 0 && ny < c) {
            if(!visited[nx][ny] && board[nx][ny] != 'T') {
                visited[nx][ny] = true;
                dfs(nx, ny, dist + 1);
                visited[nx][ny] = false;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> r >> c >> k;
    
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cin >> board[i][j];
        }
    }
    
    visited[r-1][0] = true;
    dfs(r-1, 0, 1);
    
    cout << answer << endl;
    
    return 0;
}