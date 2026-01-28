#include <bits/stdc++.h>
using namespace std;

vector<int>parent;
vector<string>lake;
int r,c;

int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};

int find(int x){
    if(parent[x]==x) return x;
    else return parent[x]=find(parent[x]);
}

void Union(int x, int y){
    x=find(x);
    y=find(y);
    if (x!=y) parent[y]=x;
}

int id(int x, int y) {
    return x*c+y;
}

bool range(int x, int y) {
    return x>=0&&x<r&&y>=0&&y<c;
}


int main() {
    cin.tie(0)->sync_with_stdio(0);

    cin>>r>>c;

    lake.resize(r);
    parent.resize(r*c);

    for (int i=0; i<r*c; i++) {
        parent[i]=i;
    }

    queue<pair<int,int>>q;
    vector<int>arr;

    for (int i=0; i<r; i++) {
        cin>>lake[i];
        for (int j=0; j<c; j++) {
            if (lake[i][j]=='L') {
                arr.push_back(id(i,j));
                lake[i][j]='.';
            }
        }
    }

    for (int i=0; i<r; i++) {
        for (int j=0; j<c; j++) {
            if (lake[i][j]=='.') {
                for (int k=0; k<4; k++) {
                    int rx=i+dx[k];
                    int cy=j+dy[k];
                    if (!range(rx,cy)) continue;
                    if (lake[rx][cy]=='.') Union(id(i,j),id(rx,cy));
                    else if (lake[rx][cy]=='X') q.push({rx,cy});
                }
            }
        }
    }

    int cnt=0;

    while (true) {
        if (find(arr[0])==find(arr[1])) {
            cout<<cnt<<"\n";
            break;
        }

        int t=q.size();
        while (t--) {
            auto [r,c]=q.front();
            q.pop();

            if (lake[r][c]=='.') continue;
            lake[r][c]='.';

            for (int i=0; i<4; i++) {
                int rx=r+dx[i];
                int cy=c+dy[i];
                if (!range(rx,cy)) continue;
                if (lake[rx][cy]=='.') Union(id(r,c),id(rx,cy));
                else q.push({rx,cy});
            }
        }
        cnt++;
    }
}