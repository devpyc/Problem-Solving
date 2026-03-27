#include <bits/stdc++.h>
using namespace std;

long long sum(vector<long long>&tree, int i) {
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

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n,m,k;
    cin>>n>>m>>k;

    vector<long long>arr(n+1),tree(n+1);
    for (int i=1; i<=n; i++) {
        cin>>arr[i];
        update(tree,i,arr[i]);
    }
    m+=k;
    while (m--) {
        int t;
        cin>>t;
        if (t==1) {
            int a;
            long long b;
            cin>>a>>b;

            long long diff=b-arr[a];
            arr[a]=b;
            update(tree,a,diff);
        }else {
            int a,b;
            cin>>a>>b;
            cout<<sum(tree,b)-sum(tree,a-1)<<"\n";
        }
    }
}