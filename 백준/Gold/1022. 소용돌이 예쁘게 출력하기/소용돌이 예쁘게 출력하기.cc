#include <bits/stdc++.h>
#define INF 1e9
typedef long long ll;
using namespace std;

int y, x;
int r1, c1, r2, c2;
int paper[50][5];
int dy[4] = {0, -1, 0, 1}; // W, S, E, N
int dx[4] = {1, 0, -1, 0};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> r1 >> c1 >> r2 >> c2;
    y = x = 0;
    int d = 0; // direction
    int inc = 1; // increase
    int cnt = 1; // move count
    int cor = 2; // corner
    for(int i = 1; i <= 10001*10001; i++){
        if(r1 <= y && y <= r2 && c1 <= x && x <= c2)
            paper[y-r1][x-c1] = i;
        if(i == cor){
            cor += inc;
            d++;
            cnt++;
            if(cnt%2 == 0)
                inc++;
        }
        y += dy[d%4];
        x += dx[d%4];
    }
    int m = 0; // maximum value 
    for(int r = 0; r < 50; r++)
        for(int c = 0; c < 5; c++)
            m = max(m, paper[r][c]);
    int order = to_string(m).size();
    for(int r = 0; r <= r2-r1; r++){
        for(int c = 0; c <= c2-c1; c++){
            for(int i = 0; i < order-to_string(paper[r][c]).size(); i++)
                cout << " ";
            cout << paper[r][c] << " ";
        }
        cout << "\n";
    }
    return 0;
}