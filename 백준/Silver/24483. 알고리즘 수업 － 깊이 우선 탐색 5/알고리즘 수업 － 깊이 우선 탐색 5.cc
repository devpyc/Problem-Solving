#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M, R;
    cin >> N >> M >> R;

    vector<vector<int>> adj(N + 1);
    for(int i=0; i<M; ++i){
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for(int i=1; i<=N; ++i){
        sort(adj[i].begin(), adj[i].end());
    }

    vector<int> depth(N + 1, -1);
    vector<int> order(N + 1, 0);

    stack<pair<int, int>> s;
    s.emplace(R, 0);

    int current_order = 1;
    while(!s.empty()){
        auto [u, d] = s.top();
        s.pop();
        if(depth[u] != -1){
            continue;
        }

        depth[u] = d;
        order[u] = current_order++;

        for(auto it = adj[u].rbegin(); it != adj[u].rend(); ++it){
            int v = *it;
            if(depth[v] == -1){
                s.emplace(v, d + 1);
            }
        }
    }
    
    ll total = 0;
    
    for(int i=1; i<=N; ++i){
        if(depth[i] != -1 && order[i] != 0){
            total += (ll)depth[i] * (ll)order[i];
        }
    }
    cout << total;
}