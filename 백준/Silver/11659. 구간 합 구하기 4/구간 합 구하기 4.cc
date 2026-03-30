#include <bits/stdc++.h>
using namespace std;

long long sum(vector<long long>&tree,int i) {
    long long ans=0;
    while (i>0) {
        ans+=tree[i];
        i-=(i&-i);
    }
    return ans;
}

void update(vector<long long>&tree, int i, long long diff) {
    while (i<tree.size()) {
        tree[i]+=diff;
        i+=(i&-i);
    }
}

int main(){
    cin.tie(0)->sync_with_stdio(0);

    int n,m;
    cin>>n>>m;

    vector<long long>arr(n+1);
    vector<long long>tree(n+1);
    for (int i=1; i<=n; i++) {
        cin>>arr[i];
        update(tree,i,arr[i]);
    }
    while (m--) {
        int i,j;
        cin>>i>>j;
        cout<<sum(tree,j)-sum(tree,i-1)<<"\n";
    }
}