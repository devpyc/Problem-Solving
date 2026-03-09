#include <bits/stdc++.h>
using namespace std;

struct Edge {
    int to;
    int rev;
    int cap;
};

class MaxFlow {
public:
    int N;
    vector<vector<Edge>> graph;
    vector<int> level;
    vector<int> ptr;

    MaxFlow(int N_) : N(N_), graph(N, vector<Edge>()), level(N, -1), ptr(N, 0) {}

    void add_edge(int from, int to, int cap){
        Edge a = {to, (int)graph[to].size(), cap};
        Edge b = {from, (int)(graph[from].size()), 0};
        graph[from].push_back(a);
        graph[to].push_back(b);
    }

    bool bfs(int s, int t){
        fill(level.begin(), level.end(), -1);
        queue<int> q;
        q.push(s);
        level[s] = 0;
        while(!q.empty()){
            int v = q.front(); q.pop();
            for(auto &e : graph[v]){
                if(e.cap > 0 && level[e.to]==-1){
                    level[e.to] = level[v]+1;
                    q.push(e.to);
                    if(e.to == t) break;
                }
            }
        }
        return level[t] != -1;
    }

    int dfs(int v, int t, int pushed){
        if(v == t) return pushed;
        for(int &cid = ptr[v]; cid < graph[v].size(); cid++){
            Edge &e = graph[v][cid];
            if(e.cap > 0 && level[e.to] == level[v]+1){
                int tr = dfs(e.to, t, min(pushed, e.cap));
                if(tr > 0){
                    e.cap -= tr;
                    graph[e.to][e.rev].cap += tr;
                    return tr;
                }
            }
        }
        return 0;
    }

    int max_flow(int s, int t){
        int flow = 0;
        while(bfs(s, t)){
            fill(ptr.begin(), ptr.end(), 0);
            while(int pushed = dfs(s, t, INT32_MAX)){
                flow += pushed;
            }
        }
        return flow;
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N, M;
    cin >> N >> M;
    vector<string> grid(N);
    int K_i, K_j, H_i, H_j;
    for(int i=0;i<N;i++){
        cin >> grid[i];
        for(int j=0;j<M;j++){
            if(grid[i][j] == 'K'){
                K_i = i;
                K_j = j;
            }
            if(grid[i][j] == 'H'){
                H_i = i;
                H_j = j;
            }
        }
    }

    auto get_idx = [&](int i, int j) -> int {
        return i * M + j;
    };

    int total_cells = N * M;
    int total_nodes = 2 * total_cells;

    MaxFlow mf(total_nodes);

    const int INF = 1e9;

    for(int i=0;i<N;i++) {
        for(int j=0;j<M;j++) {
            if(grid[i][j] == '#') continue;
            int idx = get_idx(i,j);
            int in_node = idx * 2;
            int out_node = idx * 2 + 1;
            if(grid[i][j] == 'K' || grid[i][j] == 'H'){
                mf.add_edge(in_node, out_node, INF);
            }
            else{
                mf.add_edge(in_node, out_node, 1);
            }

            int dirs[4][2] = { {-1,0}, {1,0}, {0,-1}, {0,1} };
            for(auto &dir : dirs){
                int ni = i + dir[0];
                int nj = j + dir[1];
                if(ni >=0 && ni < N && nj >=0 && nj < M && grid[ni][nj] != '#'){
                    int neighbor_idx = get_idx(ni, nj);
                    int neighbor_in = neighbor_idx * 2;

                    mf.add_edge(out_node, neighbor_in, INF);
                }
            }
        }
    }

    int K_idx = get_idx(K_i, K_j);
    int H_idx = get_idx(H_i, H_j);
    int source = K_idx * 2 + 1;
    int sink = H_idx * 2;

    int flow = mf.max_flow(source, sink);

    if(flow >= INF){
        cout << "-1";
    }
    else{
        cout << flow;
    }
}