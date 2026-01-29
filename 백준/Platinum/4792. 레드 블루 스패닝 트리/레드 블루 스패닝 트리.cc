#include <bits/stdc++.h>
using namespace std;

vector<int>parent;

int find(int x) {
    if (parent[x]==x) return x;
    else return parent[x]=find(parent[x]);
}

void Union(int x, int y) {
    x=find(x);
    y=find(y);
    if (x!=y) parent[y]=x;
}

bool same(int x, int y) {
    return find(x)==find(y);
}

class Edge {
public:
    int b,c;
    char a;
    Edge(int b, int c, char a):b(b),c(c),a(a){}
    bool operator<(const Edge& edge) const {
        if (b==edge.b) return a<edge.a;
        return b<edge.b;
    }
};

int main() {
    cin.tie(0)->sync_with_stdio(0);

    while (true) {
        int n,m,k;
        cin>>n>>m>>k;
        if (n==0&&m==0&&k==0) return 0;

        vector<Edge>arr;

        while (m--) {
            int a,b;
            char c;
            cin>>c>>a>>b;
            arr.emplace_back(a,b,c);
        }

        parent.resize(n+1);
        iota(parent.begin(),parent.end(),0);

        int Max=0,cnt=0;
        for (auto i:arr) {
            if (i.a=='B'&&!same(i.b,i.c)) {
                Union(i.b,i.c);
                Max++;
                cnt++;
            }
        }

        for (auto i:arr) {
            if (!same(i.b,i.c)) {
                Union(i.b,i.c);
                cnt++;
            }
        }


        parent.resize(n+1);
        iota(parent.begin(),parent.end(),0);

        int Min=0;
        cnt=0;

        for (auto i:arr) {
            if (i.a=='R'&&!same(i.b,i.c)) {
                Union(i.b,i.c);
                cnt++;
            }
        }

        for (auto i:arr) {
            if (!same(i.b,i.c)) {
                Union(i.b,i.c);
                if (i.a=='B') Min++;
                cnt++;
            }
        }
        cout<<(Min<=k&&k<=Max)<<"\n";
    }
}