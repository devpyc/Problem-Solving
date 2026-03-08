#include <bits/stdc++.h>
using namespace std;

vector<int>parent;

int find(int x) {
    if (parent[x]==x) return x;
    else return parent[x]=find(parent[x]);
}

void merge(int x, int y) {
    x=find(x);
    y=find(y);
    if (x!=y) parent[y]=x;
}

bool same(int x, int y) {
    return find(x)==find(y);
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n,m;
    cin>>n>>m;

    parent.resize(n+1);
    for (int i=1; i<=n; i++) {
        parent[i]=i;
    }
    int cnt=0;
    while (m--) {
        int a,b;
        cin>>a>>b;
        if (same(a,b)) cnt++;
        else merge(a,b);
    }

    unordered_set<int>res;
    for (int i=1; i<=n; i++) {
        res.insert(find(i));
    }
    cout<<cnt+(res.size()-1);
}