#include <bits/stdc++.h>
using namespace std;

int n,m;
vector<int>arr,res;
bool check[8];

void dfs(int x) {
    if (x==m) {
        for (int x:res) cout<<x<<" ";
        cout<<"\n";
        return;
    }
    int ans=-1;
    for (int i=0; i<n; i++) {
        if (!check[i]&&ans!=arr[i]) {
            check[i]=true;
            res[x]=arr[i];
            ans=arr[i];
            dfs(x+1);
            check[i]=false;
        }
    }
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    cin>>n>>m;
    arr.resize(n);
    res.resize(m);
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    dfs(0);
}