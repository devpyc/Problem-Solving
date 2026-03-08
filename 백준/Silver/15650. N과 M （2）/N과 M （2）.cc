#include <bits/stdc++.h>
using namespace std;

int n,m;
int arr[10];
bool visited[10];

void dfs(int idx, int cnt) {
    if (cnt==m) {
        for (int i=0; i<m; i++) {
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
        return;
    }
    for (int i=idx; i<=n; i++) {
        arr[cnt]=i;
        dfs(i+1,cnt+1);
    }
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    cin>>n>>m;
    dfs(1,0);
}