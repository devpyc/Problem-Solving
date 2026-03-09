#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    vector<string> words(N);
    for (int i = 0; i < N; i++){
        cin >> words[i];
    }
    
    sort(words.begin(), words.end());
    words.erase(unique(words.begin(), words.end()), words.end());
    int M = words.size();

    vector<vector<int>> graph(M);
    for (int i = 0; i < M; i++){
        for (int j = 0; j < M; j++){
            if(i == j) continue;
            if(words[i].size() < words[j].size()){
                if(words[j].substr(0, words[i].size()) == words[i])
                    graph[i].push_back(j);
            }
        }
    }
    
    vector<int> matchR(M, -1);
    function<bool(int, vector<bool>&)> dfs = [&](int u, vector<bool>& visited) -> bool {
        for (int v : graph[u]){
            if(!visited[v]){
                visited[v] = true;
                if(matchR[v] == -1 || dfs(matchR[v], visited)){
                    matchR[v] = u;
                    return true;
                }
            }
        }
        return false;
    };
    
    int maxMatching = 0;
    for (int u = 0; u < M; u++){
        vector<bool> visited(M, false);
        if(dfs(u, visited))
            maxMatching++;
    }
    cout << M - maxMatching << "\n";
}