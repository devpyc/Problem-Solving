#include <bits/stdc++.h>
using namespace std;

vector<int>parent;

int find(int x) {
    if (parent[x]==x) return x;
    else return parent[x]=find(parent[x]);
}

void unite(int x, int y) {
    x=find(x);
    y=find(y);
    if (x!=y) parent[y]=x;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int t;
    cin>>t;
    while (t--) {
        vector<pair<int,int>>arr;
        int v,e;
        cin>>v>>e;
        parent.resize(2*v+1);
        iota(parent.begin(),parent.end(),0);

        bool check=true;
        while (e--) {
            int a,b;
            cin>>a>>b;
            if (find(a)==find(b)) check=false;
            unite(a,b+v);
            unite(b,a+v);
        }
        cout<<(check?"YES\n":"NO\n");
    }
}