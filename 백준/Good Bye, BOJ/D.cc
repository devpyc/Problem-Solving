// MST는 기본적으로 항상 MBST, MST1을 w 이하인 간선으로 내림차순하여 크루스칼 돌리고 MST 합과 다르면 MBST이면서 MST가 아님
#include <bits/stdc++.h>
using namespace std;

struct DSU {
    vector<int>parent;
    DSU(int n):parent(n) {
        iota(parent.begin(),parent.end(),0);
    }

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
};

struct Edge {
    int u,v,w,idx;
    Edge(int u, int v, int w, int idx):u(u),v(v),w(w),idx(idx){}
    bool operator<(const Edge& edge) const {
        return w<edge.w;
    }
};

bool comp(const Edge& a, const Edge& b) {
    return a.w>b.w;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n,m;
    cin>>n>>m;

    vector<Edge>arr;
    arr.reserve(m);
    for (int i=0; i<m; i++) {
        int u,v,w;
        cin>>u>>v>>w;
        arr.emplace_back(u,v,w,i+1);
    }

    sort(arr.begin(),arr.end());

    DSU dsu1(n+1);
    long long sum=0;
    int w=0;
    for (auto& i:arr) {
        if (!dsu1.same(i.u,i.v)) {
            dsu1.Union(i.u,i.v);
            sum+=i.w;
            w=max(w,i.w);
        }
    }

    cout<<"NO\n";

    vector<Edge>arr2;
    for (auto& i:arr) {
        if (i.w<=w) arr2.push_back(i);
    }

    sort(arr2.begin(),arr2.end(),comp);

    DSU dsu2(n+1);
    long long res=0;
    vector<int>edge;
    for (auto& i:arr2) {
        if (!dsu2.same(i.u,i.v)) {
            dsu2.Union(i.u,i.v);
            edge.push_back(i.idx);
            res+=i.w;
        }
    }

    if (res!=sum) {
        cout<<"YES\n";
        for (int i:edge) {
            cout<<i<<"\n";
        }
    }else {
        cout<<"NO\n";
    }
}