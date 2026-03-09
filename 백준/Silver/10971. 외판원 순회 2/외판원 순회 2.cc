#include <bits/stdc++.h>
#define endl "\n"
#define io ios_base::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

int n;
vector<vector<int>>w;
int min_cost=INT_MAX;

void solve(int cur, vector<bool>& visited, int cnt, int cost, int start){
    if(cnt==n && w[cur][start]>0){
        min_cost=min(min_cost,cost+w[cur][start]);
        return;
    }
    for(int i=0; i<n; ++i){
        if(!visited[i]&&w[cur][i]>0){
            visited[i]=true;
            solve(i,visited,cnt+1,cost+w[cur][i],start);
            visited[i]=false;
        }
    }
}

int main(){
    io;
    cin>>n;
    w.resize(n, vector<int>(n));
    for(int i=0; i<n; ++i){
        for(int j=0; j<n; ++j){
            cin>>w[i][j];
        }
    }

    vector<bool> visited(n, false);
    for(int i=0; i<n; ++i){
        visited[i]=true;
        solve(i,visited,1,0,i);
        visited[i]=false;
    }
    cout<<min_cost<<endl;
    return 0;
}