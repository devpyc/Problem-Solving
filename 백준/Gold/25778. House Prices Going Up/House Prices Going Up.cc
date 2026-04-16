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
    while (tree.size()>i) {
        tree[i]+=diff;
        i+=(i&-i);
    }
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin>>n;

    vector<long long>arr(n+1),tree(n+1);
    for (int i=1; i<=n; i++) {
        cin>>arr[i];
        update(tree,i,arr[i]);
    }

    int m;
    cin>>m;

    while (m--) {
        char c;
        int i,j;
        cin>>c>>i>>j;

        if (c=='U') {
            update(tree,i,j);
        }else {
            cout<<sum(tree,j)-sum(tree,i-1)<<"\n";
        }
    }
}